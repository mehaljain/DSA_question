#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to extract a substring from a given string
string extractSubstring(const string& str, int start, int length) {
    string substring;
    for (int i = start; i < start + length; i++) {
        substring += str[i];
    }
    return substring;
}

// Function to convert a string to an integer manually
int stringToInt(const string& str) {
    int num = 0;
    for (int i = 0; i < str.length(); i++) {
        num = num * 10 + (str[i] - '0');
    }
    return num;
}

int findMaxSum(string s) {
    int maxSum = 0;

    for (int i = 1; i < 4; i++) {
        // Extract part1 and part2 manually
        string part1 = extractSubstring(s, 0, i);
        string part2 = extractSubstring(s, i, s.length() - i);

        int num1 = stringToInt(part1);
        int num2 = stringToInt(part2);

        int currentSum = num1 + num2;

        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {

    string s;
    cin >> s;
    cout << "Maximum sum from the number \"" << s << "\" is: " << findMaxSum(s) << endl;
    return 0;
}