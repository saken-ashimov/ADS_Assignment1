#include <iostream>
using namespace std;

bool is_palindrome(string str, int left, int right)
{
    // Base case
    if (left >= right) {
        return true;
    }

    if (str[left] == str[right]) {
        return is_palindrome(str, left + 1, right - 1);
    }
    else {
        return false;
    }
}
int main()
{
    cout << is_palindrome("aнна", 0, 3);
}