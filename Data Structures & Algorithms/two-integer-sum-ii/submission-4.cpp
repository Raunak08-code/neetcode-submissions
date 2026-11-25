// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int n = numbers.size();
//         for(int i=0; i<n-1; i++){
//             for(int j =i+1; j<n; j++){
//                 int sum = numbers[i] + numbers[j];
//                 if(target == sum) return {i+1,j+1};
//             }
//         }
//         return {};
//     }
// };


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i = 0; i < numbers.size(); i++) {
            int l = i + 1, r = numbers.size() - 1;
            int tmp = target - numbers[i];
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (numbers[mid] == tmp) {
                    return { i + 1, mid + 1 };
                } else if (numbers[mid] < tmp) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }
        return {};
    }
};
