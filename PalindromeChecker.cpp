#include "PalindromeChecker.h"

#include <iostream>


PalindromeChecker::PalindromeChecker(std::string word) {
    std::cout << "Enter a word to check: ";
    std::cin >> word;
    m_word = word;
    //Instantiate a PalindromeChecker object
    checkIfPalindrome(m_word.length(), m_word.length());
    if (isPalindrome()) {
        std::cout << word << " is a Palindrome\n";
    }
    else {
        std::cout << word << " is not a Palindrome\n";
    }
}

bool PalindromeChecker::isPalindrome() {
    const int len = m_word.length()-1;
    return checkIfPalindrome(0, len);
    }

bool PalindromeChecker::checkIfPalindrome(const int start, const int end) {
    if (start >= end)
        return true;
    if (m_word[start] != m_word[end])
        return false;
    return checkIfPalindrome(start + 1, end - 1);
    }