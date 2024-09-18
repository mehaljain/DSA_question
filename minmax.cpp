#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int min_no, max_no=0;
    
    for(int i=0;i<n;i++){
        
        max_no = max(max_no,arr[i]);
    }
    
    min_no = max_no;
    
    for(int i=0;i<n;i++){
        
        min_no = min(min_no,arr[i]);
    }

    int sum = min_no + max_no;

    cout<<sum;
    
    return 0;
}

