#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxLengthEvenSumSubarray(vector<int> &arr, int n) {
    int maxLength = 0;

    for (int i = 0; i < n; ++i) {
        int sum = 0; 

        for (int j = i; j < n; ++j) {
            sum += arr[j]; 

            if (sum % 2 == 0) {
                int currentLength = j - i + 1; 
                maxLength = max(maxLength, currentLength); 
            }
        }
    }

    return maxLength; 
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n); 

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int result = maxLengthEvenSumSubarray(arr, n);
    if (result > 0) {
        cout << "The maximum length of a subarray with an even sum is " << result << "." << endl;
    } else {
        cout << "No subarray with an even sum exists." << endl;
    }

    return 0;
}
