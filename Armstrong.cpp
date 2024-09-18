#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;  
    
    int sum = 0;
    int temp =n;
    
    while(n>0){
        int no = n%10;
        sum += (no*no*no);
        n = n/10; 
    }

    if(temp == sum){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}