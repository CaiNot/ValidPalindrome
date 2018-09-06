#include <iostream>
#include <string>

using namespace std;

int isEvenNumber(int n) { // 是否是偶数
    return n & 1;
}

bool isValid(string &s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right])
            return false;
        ++left;
        --right;
    }
    return true;
}

bool validPalindrome(string s) {
    int left = 0, right = s.size() - 1;
    while (left < right) {
        if (s[left] != s[right])
            return (isValid(s, left, right - 1) || isValid(s, left + 1, right));
        ++left;
        --right;
    }
    return true;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
//    cout << validPalindrome("abc") << endl;
//    cout << validPalindrome("a") << endl;
    cout << validPalindrome(
            "aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga")
         << endl;

    return 0;
}