#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int> candidate, int n, int k,  int l, int cursum, vector<int> temp) {
        if (cursum > n) {
            return;
        }

            if (cursum == n && temp.size() == k) {
                ans.push_back(temp);
                return;
            }
        
      
        
        cursum += candidate[l];
        temp.push_back(candidate[l]);
        helper(candidate, n, k, l, cursum, temp);
        cursum -= candidate[l];
        temp.pop_back();
        helper(candidate, n, k, l+1, cursum, temp);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        vector<int> candidate = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        helper(candidate, n, k, 0, 0, temp);
        return ans;
    }
};

int main() {
    Solution sol;
    int k = 3;
    int n = 7;
    vector<vector<int>> result = sol.combinationSum3(k, n);
    for (auto &vec : result) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}