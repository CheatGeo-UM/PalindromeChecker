#ifndef PALINDROMECHECKER_PALINDROMECHECKER_H
#define PALINDROMECHECKER_PALINDROMECHECKER_H
#include <string>


class PalindromeChecker {
private:
    std::string m_word;
public:
    explicit PalindromeChecker(std::string word);
    bool isPalindrome();
private:
    bool checkIfPalindrome(int start, int end);
};


#endif //PALINDROMECHECKER_PALINDROMECHECKER_H
