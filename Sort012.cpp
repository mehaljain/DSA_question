#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) {

        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mid = 0;

        while (mid <= high) {
            if (nums[mid] == 0) {
                int temp = nums[mid];
                nums[mid] = nums[low];
                nums[low] = temp;
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                int temp = nums[mid];
                nums[mid] = nums[high];
                nums[high] = temp;
                high--;
            }
        }
    }

    int main(){
        // int nums = [1,2,0,2,1];
        return 0;
    }