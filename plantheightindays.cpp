#include <iostream>

using namespace std;

int days_to_reach_height(int upSpeed, int downSpeed, int desiredHeight) {
    int days = 0;
    int currentHeight = 0;
    
    while (currentHeight < desiredHeight) {
        days++;
        currentHeight += upSpeed;
        
        if (currentHeight >= desiredHeight) {
            return days;
        }
        
        currentHeight -= downSpeed;
    }
    
    return days;
}

int main() {
    int upSpeed, downSpeed, desiredHeight;
    
    // Example Input
    cin>>upSpeed>>downSpeed>>desiredHeight;
    
    int result = days_to_reach_height(upSpeed, downSpeed, desiredHeight);
    
    cout << "Number of days to reach the desired height: " << result << endl;
    
    return 0;
}