#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int findMaxSum(string s) {
    int maxSum = 0;

    for (int i = 1; i < 4; i++) {
        string part1 = s.substr(0, i);
        string part2 = s.substr(i);

        int num1 = stoi(part1);
        int num2 = stoi(part2);

        int currentSum = num1 + num2;

        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {

    string s ;
    cin>>s;
    cout << "Maximum sum from the number \"" << s << "\" is: " << findMaxSum(s) << endl;
    return 0;
}
