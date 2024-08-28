// Rohan is weak in mathematics.He is giving mathematics  Olympiad , but he got stuck in one of the question .Help rohan to solve the question.In Question there are two positive integer A and B. You have to find the product of all integer between A and B which is represented in the form C=D*10^E , where  C is the product of numbers , D and E are non-negative integers and the last digit of D is non-zero.

// Function Description 

// Complete the function formatProducts in the editor below, formatProduct must return a string that represents C in the above described form.

// Function has the following parameters

// A: an integer

// B: an integer

// Constraints

//    A will between 1 and 1,000,000 . Inclusive.
//    B will be between A and 1,000,000. Inclusive.
// Sample Input 0 

// 1

// 5

// Sample Output 0

// 12 * 10^1

// Explanation 

// 1*2*3*4*5=120 = 12 * 10^1

// Sample Input 1

// 3

// 10

// Sample Output 1

// 18144 * 10^2

// Explanation

// 3*4*….*10=1814400 =18144 * 10^2



#include<iostream>
#include<string>
using namespace std;

int product10(int fact){

    string temp = " ";
    int power = 0;

    while((fact%10)==0){
        fact = fact/10;
        power++;
    }
    temp = temp + to_string(fact)+ " * 10^" + to_string(power);
    cout<<temp;
}

int factorial(int a, int b){

    int fact = 1;

    for(int i=a; i<=b; i++){
        fact = fact * i;
    }

    product10(fact);
}

int main(){

    int a,b;
    cin>>a>>b;

    factorial(a,b);
    return 0;
}

