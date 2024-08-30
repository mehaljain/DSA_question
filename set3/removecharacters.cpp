// Remove uppercase, lowercase, special, numeric, and non-numeric characters from a String

// Input: str = “GFGgfg123$%”

// Output: After removing uppercase characters: gfg123$%

//              After removing lowercase characters: GFG123$%

//             After removing special characters: GFGgfg123

//            After removing numeric characters: GFGgfg$%

//            After removing non-numeric characters: 123

// Input: str = “J@va12”

// Output: After removing uppercase characters: @va12

//              After removing lowercase characters: J@12

//             After removing special characters: Jva12

//            After removing numeric characters: J@va           

//           After removing non-numeric characters: 12



#include <iostream>
#include <string>
using namespace std;

string removeUppercase(const string& str) {
    
    string result;
    for (int i = 0; i < str.length(); i++) {

        if (!(str[i] >= 'A' && str[i] <= 'Z')) {
            result += str[i];
        }
    }
    return result;
}

string removeLowercase(const string& str) {

    string result;
    for (int i = 0; i < str.length(); i++) {

        if (!(str[i] >= 'a' && str[i] <= 'z')) {
            result += str[i];
        }
    }
    return result;
}

string removeSpecial(const string& str) {

    string result;
    for (int i = 0; i < str.length(); i++) {

        if ((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<='9')){
            result += str[i];
        }
    }
    return result;
}

string removeNumeric(const string& str) {

    string result;
    for (int i = 0; i < str.length(); i++) {

        if (!(str[i] >= '0' && str[i] <= '9')) {
            result += str[i];
        }
    }
    return result;
}

string removeNonNumeric(string& str) {

    string result;
    for (int i = 0; i < str.length(); i++) {

        if (str[i] >= '0' && str[i] <= '9') {
            result += str[i];
        }
    }
    return result;
}

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;  

    cout << "\nOriginal string: " << str << endl;
    cout << "After removing uppercase characters: " << removeUppercase(str) << endl;
    cout << "After removing lowercase characters: " << removeLowercase(str) << endl;
    cout << "After removing special characters: " << removeSpecial(str) << endl;
    cout << "After removing numeric characters: " << removeNumeric(str) << endl;
    cout << "After removing non-numeric characters: " << removeNonNumeric(str) << endl;

    return 0;
}
