/*
    ECS 122B: Final Project
    Suffix Tree Applications:
        1. Finding the number of occurrences of a given pattern in a string (Sec 7.3 in the book)
        2. Circular String - Finding the lexicographically smallest string using any arrangement in the text (Sec 7.13 in the book)
        3. Building a General Suffix Tree (GST)

    ________________________________________________
    Team Members:
        Alexander G
        Harjot B
        Harjot T
        Lovepreet S
        Soham K
*/

#include <iostream>
#include <string>
#include <locale> // for converting strings to lower case

#include "suffixTree.h"

std::string get_lexicographically_least_string(std::string circStrToProcess) {

    // double the string, then create a suffix tree on the doubled string
    std::string doubledString = circStrToProcess + circStrToProcess;
    suffixTree circleTree = generate_suffix_tree(doubledString);

    // breadth-first search, selecting the lexographically least edge each time
    // until we reach the size of the original circular string 'circStrToProcess'
    std::queue<char> lexLeastQueue; // this will store our result
    int iterator = 0; // this will iterate the search function until our result string is the size of the circStrToProcess
    std::
    while(iterator < circStrToProcess.length()) {

    }

}

int get_pattern_occurrence_count(std::string fullText) {

}

suffixTree generate_suffix_tree(std::string userString) {
    // Instantiate a suffix tree object
    suffixTree tree;

    for (int index = 0; index < userString.length(); index++)
        carryPhase(tree, index);

    return tree;
}

int main() {
    // ask the user to input a string, then getline their input
    std::string circularString;
    cout << "Please enter your circular string, starting from anywhere in it: ";
    std::getline(std::cin, circularString);

    // convert the user string to an all lower-case string
    std::locale loc;
    std::string str;
    for(autoelem:str)
        std::tolower(elem,loc);

    std::cout << std::endl << "Cool. Enter what suffix tree application you want to run on it ('circular' or 'occurrence'): ";
    std::string applicationMethod;
    std::getline(std::cin, applicationMethod);

    if (applicationMethod == "circular") {

    } else if (applicationMethod == "occurrence") {

    }
}
