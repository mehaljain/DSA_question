// Problem statement :

// Ratan is a crazy rich person. And he is blessed with luck, so he always made the best profit possible with the shares he bought. That means he bought a share at a low price and sold it at a high price to maximize his profit. Now you are an income tax officer and you need to calculate the profit he made with the given values of stock prices each day. You have to calculate only the maximum profit Ratan earned.
// Note that:
// Ratan never goes into loss.

// Example 1 :

// Price=[1,6,2]
// Ratan buys it on the first day and sells it on the second.

// Example 2 :

// Price=[9,8,6]

// The Price always went down, Ratan never bought it.

// Input Format:
// First line with an integer n, denoting the number days with the value of the stack
// Next n days, telling the price of the stock on that very day.

// Output Format:
// Maximum profit done by Ratan in a single line.
// Constraints:
// Number of days <=10^8

// Sample Input for Custom Testing

// STDIN
// ———–
// 7
// 1
// 9
// 2
// 11
// 1
// 9
// 2

// Sample Output

// 10

// Explanation

// The maximum profit possible is when Ratan buys it in 1 rupees and sells it in 11.

#include<iostream>
#include<vector>
using namespace std;

int stock(vector<int>& arr){

    int n =arr.size();
    int minprofit = arr[0];
    int maxprofit = 0;

    for(int i=0; i<n; i++){

        minprofit = min(minprofit, arr[i]);
        maxprofit = max(maxprofit, arr[i] - minprofit);
    }

    cout<<maxprofit<<endl;


}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    
    stock(arr);
    return 0;

}