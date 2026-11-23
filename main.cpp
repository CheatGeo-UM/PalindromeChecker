#include <iostream>
#include <string>

//This is the recursive function
bool checkIfPalindrome(std::string s, int start, int end) {
    if (start >= end)
        return true;
    if (s[start] != s[end])
        return false;
    return checkIfPalindrome(s, start + 1, end - 1); //Recursive function call

};

//This is a helper function to simplify the recursive function
bool isPalindrome(std::string s) {
    int len = s.length()-1;
    return checkIfPalindrome(s, 0, len);
    //madam; odd number of characters
    //noon; even number of characters
    //racecar; odd number of characters
    //rotor; odd number of characters
}

int main() {
    std::string word;
    std::cout << "Enter a word to check: ";
    std::cin >> word;
    //Instantiate a PalindromeChecker object
    if (isPalindrome(word)) {
        std::cout << word << " is a Palindrome\n";
    }
    else {
        std::cout << word << " is not a Palindrome\n";
    }

    return 0;
}
