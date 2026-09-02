// C++ Code — Two Sum Using Two Pointers
#include <iostream>
using namespace std;

pair<int, int> twoSum(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            return {arr[left], arr[right]};
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return {-1, -1};
}

int main() {
    vector<int> arr = {2, 5, 1, 7, 3};
    int target = 6;

    pair<int, int> ans = twoSum(arr, target);

    if (ans.first != -1) {
        cout << ans.first << " " << ans.second << endl;
    }
    else {
        cout << "No pair found" << endl;
    }

    return 0;
}