// decimal to binary and add it's bits


#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int>ans;
    int count = 0;
    

    while(n>0){
        int s = n&1;
        count = count + s;
        ans.push_back(s);
        n=n>>1;
    }

    cout<<count<<endl;
    int size1 = ans.size() -1;
    for(int i=size1; i>=0; i--){
        cout<<ans[i];
    }


}