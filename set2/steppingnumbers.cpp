#include<iostream>
#include<queue>
using namespace std;

void displaySteppingNumbers(int n, int m) {
    queue<int> q; 
    for (int i = 1; i <= 9; i++) { 
        q.push(i); 
    } 
        
    while (!q.empty()) { 
        
        int stepNum = q.front(); 
        q.pop(); 
        
        if (stepNum >= n && stepNum <= m) {
            cout << stepNum << " "; 
        } 
        
        if (stepNum == 0 || stepNum > m) {
            continue;
        }

        int lastDigit = stepNum % 10;
        int stepNumA = stepNum * 10 + (lastDigit - 1);
        int stepNumB = stepNum * 10 + (lastDigit + 1);
        
        if (lastDigit == 0) {
            q.push(stepNumB);
        } else if (lastDigit == 9) {
            q.push(stepNumA);
        } else {
            q.push(stepNumA);
            q.push(stepNumB);
        }
    }
}

int main() {
    int n, m;
    cout << "Enter the range [n, m]: "; cin >> n >> m;
    cout << "Stepping Numbers between " << n << " and " << m << ": ";
    displaySteppingNumbers(n, m);
    return 0;
}