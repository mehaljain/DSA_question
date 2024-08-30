#include <iostream>
using namespace std;

int main() {
    const char* myString = "Hello, World!";
    int count = 0;

    while (myString[count] != '\0') {
        count++;
    }

    cout << "The length of the string is: " << count << endl;
    return 0;
}