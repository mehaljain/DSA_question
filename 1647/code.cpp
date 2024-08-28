#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    int minDeletions(string s) {

        sort(s.begin(),s.end());
        vector<int> str;
        int count = 1;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == s[i+1]) {
                count++;
            } else {
                str.push_back(count);
                count = 1;
            }
        }
        
        if(str.size() == 1) {
            return 0;
        }

        int ans = 0;
        int n = 52;

        while(n > 0) {
            sort(str.begin(), str.end());

            for(int i = 0; i < str.size() - 1; i++) {
                if(str[i] == str[i+1] && str[i] != 0) {
                    str[i+1] = str[i+1] - 1;
                    ans++;
                }
            }
            n--;
        }

        return ans;
    }
};

int main() {
    Solution solution;

    // Test case 1
    string s1 = "aab";
    cout << "Test case 1: " << solution.minDeletions(s1) << endl; // Expected output: 0

    // Test case 2
    string s2 = "aaabbbcc";
    cout << "Test case 2: " << solution.minDeletions(s2) << endl; // Expected output: 2

    // Test case 3
    string s3 = "ceabaacb";
    cout << "Test case 3: " << solution.minDeletions(s3) << endl; // Expected output: 2

    // Test case 4
    string s4 = "abcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwz";
    cout << "Test case 4: " << solution.minDeletions(s4) << endl; // Expected output depends on input

    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <string>

using namespace std;

class Solution {
public:
    int minDeletions(string s) {
        vector<int> freq(26, 0);
        
        // Step 1: Count frequency of each character
        for (char c : s) {
            freq[c - 'a']++;
        }
        
        // Step 2: Sort the frequency array in descending order
        sort(freq.rbegin(), freq.rend());
        
        int ans = 0;
        unordered_set<int> usedFrequencies;
        
        // Step 3: Ensure all frequencies are unique
        for (int i = 0; i < 26; i++) {
            int currentFreq = freq[i];
            while (currentFreq > 0 && usedFrequencies.count(currentFreq)) {
                currentFreq--;  // Reduce the frequency to make it unique
                ans++;          // Count this as a deletion
            }
            if (currentFreq > 0) {
                usedFrequencies.insert(currentFreq); // Mark this frequency as used
            }
        }
        
        return ans;
    }
};

int main() {
    Solution solution;

    // Test case 1
    string s1 = "aab";
    cout << "Test case 1: " << solution.minDeletions(s1) << endl; // Expected output: 0

    // Test case 2
    string s2 = "aaabbbcc";
    cout << "Test case 2: " << solution.minDeletions(s2) << endl; // Expected output: 2

    // Test case 3
    string s3 = "ceabaacb";
    cout << "Test case 3: " << solution.minDeletions(s3) << endl; // Expected output: 2

    // Test case 4
    string s4 = "abcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwzabcdefghijklmnopqrstuvwxwz";
    cout << "Test case 4: " << solution.minDeletions(s4) << endl; // Expected output: depends on input

    return 0;
}

