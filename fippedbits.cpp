#include <iostream>
using namespace std;

// Function to count "011" and "100" substrings
int countSubstring(string &s)
{
    int count = 0;
    for (int i = 0; i < s.size() - 2; i++)
    {
        if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '1') || (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0'))
        {
            count++;
        }
    }
    return count;
}

int maxSubString(string &s)
{
    int maxcount = 0;
    string flipped = s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            flipped[i] = '1';
        }
        else
        {
            flipped[i] = '0';
        }
        maxcount = max(maxcount, countSubstring(flipped));
        flipped[i] = s[i];
    }
    return maxcount;
}

int main()
{
    string binarystring;
    cout << "Enter a binary string: ";
    cin >> binarystring;
    cout << "max substring after flip : " << maxSubString(binarystring);
    return 0;
}