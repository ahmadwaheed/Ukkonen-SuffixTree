#include "suffixTree.h"
#include "gtest/gtest.h"

using testing::Test;

#include <algorithm>
#include <random>
#include <string>

#define NUM_TEST_CASES 10000
#define RANDOM_STRING_SIZE 100

const std::string Sigma = "abcdefghijklmnopqrstuvwxyz";

// Sanity check for suffixTree
// Does NUM_TEST_CASES times:
//    1) Generate random string T of size RANDOM_STRING_SIZE
//    2) Generate a random substring P of T
//    3) Runs BoyerMoore and checks there is at least one match
// Use <random> & uniform_int_distribution for your random number generation
TEST(sanitycheck, SubstringMatchesInRandomString) {
  std::default_random_engine generator;
  std::uniform_int_distribution<int> letterDistribution(0, 25);
  std::uniform_int_distribution<int> substringDistribution(1, RANDOM_STRING_SIZE);

  //std::list<int> matches;
  std::string P, T;

  int start = 0, end = 0;

  for (int i = 0; i < NUM_TEST_CASES; i++) {
    T = "";
    for (int j = 0; j < RANDOM_STRING_SIZE; j++) {
      T.push_back('a' + letterDistribution(generator));
    }

    start = substringDistribution(generator);
    end = substringDistribution(generator);
    if (start > end)
      std::swap(start, end);

    P = T.substr(start, end);

    TLength = T.length() - 1;

    // Allocating memory to the array of nodes.
    nodeArray = (Node *)malloc(2*TLength*(sizeof (Node)));
  //  cout << "you entered " << Input  << " length " << inputLength << endl;

    // Creating initial suffixTree.
    suffixTree tree (0, 0, -1);
    // Carry out different phases.
    for (int i = 0; i <= TLength; i++)
        carryPhase(tree, i);

    // Clear the previous matches vector
    //matches.clear();

    // And run the Boyer Moore algorithm on it
  //  BoyerMoore(P, T, Sigma, &matches);
   boolean answer =  search(P);
    /* Debugging
      std::cout << "T: " << T << std::endl;
      std::cout << "P: " << P << std::endl;
      std::cout << "S: " << start << std::endl;
      std::cout << "E: " << end << std::endl;
    */
    ASSERT_EQ(answer, true);
    //ASSERT_GE(matches.size(), 1);
  }
}

int main(int argc, char** argv) {
   testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}
