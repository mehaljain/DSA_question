#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int perfect_squares(vector<int>arr, int n){

    int count =0;
    for(int i=0; i<n; i++){

        if(ceil((double)sqrt(arr[i])) == floor((double) sqrt(arr[i]))){
            count++;
        }
    }
    return count;

}
int main(){

    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = perfect_squares(arr,n);
    cout<<ans<<endl;

    return 0;
}