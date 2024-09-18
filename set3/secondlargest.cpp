#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int second =-1;
    int first = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }else if(arr[i]>second && arr[i]!=first){
            second = arr[i];
        }

    }

    cout<<first<<" "<<second<<endl;

}
