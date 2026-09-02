// 1. Problem Statement

// You are given a sorted array that may contain duplicate elements.

// Your task is to:

// 1. Remove duplicates in-place.
// 2. Keep only the unique elements at the beginning of the array.
// 3. Use O(1) extra space.
// 4. Return the number of unique elements.
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    int i = 0;

    for (int j = 1; j < nums.size(); j++) {

        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}

int main() {
    vector<int> nums = {1, 1, 2, 3, 3};

    int k = removeDuplicates(nums);

    cout << "Number of unique elements: " << k << endl;

    cout << "Unique elements: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}