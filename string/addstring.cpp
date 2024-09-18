#include <iostream>
#include <string>
using namespace std;

string intToString(int n) {
    string result = "";

    // Handle the special case where n is 0
    if (n == 0) {
        return "0";
    }

    // Extract each digit from the number
    while (n > 0) {
        int digit = n % 10;        // Extract the last digit
        char ch = digit + '0';     // Convert the digit to a character
        result = ch + result;      // Append the character to the result string
        n = n / 10;                // Remove the last digit
    }

    return result;  // Return the resulting string
}

string addStrings(std::string num1, std::string num2) {
    int int1 = 0, int2 = 0, sum;

    for (int i = 0; i < num1.size(); i++) {
        int1 = int1 * 10 + (num1[i] - '0');  
    }

    for (int i = 0; i < num2.size(); i++) {
        int2 = int2 * 10 + (num2[i] - '0');  
    }

    sum = int1 + int2; 

    string ans = intToString(sum); 

    return ans;  
}

int main() {
    string num1;  
    string num2;  

    cin>>num1>>num2;

    string result = addStrings(num1, num2); 

    cout << "Sum: " << result << endl; 

    return 0;  
}
