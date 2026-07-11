class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int num : nums) {
            ans = ans ^ num;
        }
        return ans;
    }
};

int main() {
  vector<int> nums = {4,1,2,1,2};
  singleNumber(nums);
  return 0;
}
