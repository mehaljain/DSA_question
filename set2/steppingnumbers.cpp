// #include<iostream>
// #include<queue>
// using namespace std;

// void displaySteppingNumbers(int n, int m) {
//     queue<int> q; 
//     for (int i = 1; i <= 9; i++) { 
//         q.push(i); 
//     } 
        
//     while (!q.empty()) { 
        
//         int stepNum = q.front(); 
//         q.pop(); 
        
//         if (stepNum >= n && stepNum <= m) {
//             cout << stepNum << " "; 
//         } 
        
//         if (stepNum == 0 || stepNum > m) {
//             continue;
//         }

//         int lastDigit = stepNum % 10;
//         int stepNumA = stepNum * 10 + (lastDigit - 1);
//         int stepNumB = stepNum * 10 + (lastDigit + 1);
        
//         if (lastDigit == 0) {
//             q.push(stepNumB);
//         } else if (lastDigit == 9) {
//             q.push(stepNumA);
//         } else {
//             q.push(stepNumA);
//             q.push(stepNumB);
//         }
//     }
// }

// int main() {
//     int n, m;
//     cout << "Enter the range [n, m]: "; cin >> n >> m;
//     cout << "Stepping Numbers between " << n << " and " << m << ": ";
//     displaySteppingNumbers(n, m);
//     return 0;
// }



#include<iostream>
#include <cmath> 
using namespace std;

int main() {
    int n ,m;
    cin>>n>>m;

    // Function to check if an integer n is a Stepping Number
    for(int i=n; i<=m; i++) {
        int num = i;
        int prevDigit = -1; // Initialize prevDigit with -1
        bool isStepping = true;

        // Iterate through all digits of n and compare difference between previous and current digits
        while (num) {
            int curDigit = num % 10; // Get current digit

            if (prevDigit == -1) { // Single digit is considered a Stepping Number
                prevDigit = curDigit;
            } else {
                // Check if absolute difference between prev digit and current digit is 1
                if (abs(prevDigit - curDigit) != 1){
                    isStepping = false;
                    break;
                }
                prevDigit = curDigit; 
            }
            num /= 10;      
        }

            if (isStepping) {
                cout << i << " ";
        }
    }

    // Display Stepping Numbers in the range [n, m]

    return 0;
}
