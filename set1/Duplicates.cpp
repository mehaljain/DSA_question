// Problem statement : The principal has a problem with repetitions. Everytime someone sends the same email twice he becomes angry and starts yelling. His personal assistant filters the mails so that all the unique mails are sent only once, and if there is someone sending the same mail again and again, he deletes them. Write a program which will see the list of roll numbers of the student and find how many emails are to be deleted.

// Sample Input:
//     6
//     1
//     3
//     3
//     4
//     3
//     3

// Sample Output:
//     3



#include<iostream>
#include<vector>
using namespace std;

void duplicates(vector<int>& arr){

    int count = 0;
    int n = arr.size();


    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }


    for(int i=0; i<n; i++){

        if(arr[i]==arr[i+1]){
            count++;
        }
    }

    cout<<count;
}
int main() {
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    duplicates(arr);
    return 0;


}



