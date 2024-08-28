// Problem Description :

// You are given an array of integers in non-decreasing order. Your task is to sort the array after converting each element to its square.

// Write a function ‘sortArrayAfterSquaring’ that takes an array of integers as input and returns the sorted array after converting each element to its square.

// For example
// Input: [1, 2, 3, 4, 5]
// Output: [1, 4, 9, 16, 25]
// Explanation:
// In this example, the input array is [1, 2, 3, 4, 5]. After squaring each element, we get [1, 4, 9, 16, 25]. The resulting array is then sorted in ascending order, which gives [1, 4, 9, 16, 25]. Finally, the sorted array is printed.
// Input Format: Given an sorted array containing positive and negative numbers.

// Output Format: Print the sorted array containing the squares of the numbers.


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void squareSort(vector<int>&arr){

    int n = arr.size();
    int temp;

    for(int i=0; i<n; i++){

        arr[i] = arr[i] * arr[i];
    }
 
    for(int i=0; i<n-1; i++){

        for(int j=0; j<n-i-1; j++){

            if(arr[j]>arr[j+1]){

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    // sort(arr.begin(),arr.end());
   
}
int main(){

    
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    squareSort(arr);

     for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    
    return 0;

}