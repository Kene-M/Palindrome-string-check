    #include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str)
{
    int left, right, length;

    length = str.length();
    // Initialize the first and last indices
    left = 0;
    right = length - 1;

    while (left < right){
            if(str[left] != str[right]){
                return 0; // found a mismatch. So return false
            }
            left++; // move the left forward
            right--;   // move the right backward
    }
    return 1; // It is a palindrome
}


int main()
{
    string str;

    cout << "Enter the name of the string: ";

    cin >> str;
    if (isPalindrome(str))
        cout << "The given string is a palindrome. \n";
    else
        cout << "The given string is not a palindrome. \n";
}
