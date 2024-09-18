#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int main(){

    int n ,target_sum;
    cin>>n;
    cin>>target_sum;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int>result;
    unordered_set<int>s;

    for(int i=0; i<n; i++){

        int temp = target_sum - arr[i];

        if(s.find(temp)!=s.end()){
            cout<<temp<<" , "<<arr[i]<<endl;
        }

        s.insert(arr[i]);
    }


    return 0;
}