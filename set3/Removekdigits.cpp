#include<iostream>
#include<stack>
using namespace std;

string removekdigits(string num, int k){

    string ans = "";
    stack<char> s;

    for(int i =0; i<num.size(); i++){

        while(!s.empty() && s.top()>num[i] && k){
            s.pop();
            k--;
        }

        if(!s.empty() || num[i]!='0' ){
            s.push(num[i]);
        }
    }

    if(!s.empty() && k){
        s.pop();
        k--;
    }

    if(s.empty()){
        return "0";
    }

    while(!s.empty()){
        ans = s.top() +ans;
        s.pop();
    }

    return ans;
}

int  main(){

    int k;
    cin >> k;

    string s;
    cin>>s;

    string result = removekdigits(s, k);
    cout << "Result after removing " << k << " digits: " << result << endl;
    return 0;
}