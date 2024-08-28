// Problem Statement  :

// Semester exams are going on for university students. Examiners noticed that a group of people are trying to cheat. They marked students of that group as ‘1’ and students of another group ( who are not cheating ) as ‘0’

// We can reduce cheating by not allowing students from group 1 to sit together, means no two students from group 1 can sit together. Seatings are marked using above conditions. Your task is to give the seating placement of nth possibility Possibility order from 1 to 10 is given below

// [1  10  100  101  1000  1001  1010  10000  10001  10010]

// Sample input :

// 3 → number of test cases

// 4

// 6

// 9

// Sample output :

// 101

// 1001

// 10001

// Explanation :

// 4th possibility is 101

// 6th possibility is 1001

// 9th possibility is 10001

#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main()
{
    int n, m, Max = 0;
    cin >> n;
    vector<int> v(n);
    vector<string> arr;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        Max = max(Max, v[i]);
    }

    queue<string> q;
    q.push("1");
    int i = 1;
    arr.push_back("1");

    while (!q.empty())
    {

        cout << "TEST" << endl;

        string a = q.front();
        q.pop();
        q.push(a + "0");
        arr.push_back(a + "0");
        i++;

        if (a[a.length() - 1] == '0')
        {

            q.push(a + "1");
            arr.push_back(a + "1");
            i++;
        }

        if (i > Max)
            break;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[v[i] - 1] << endl;
    }
}