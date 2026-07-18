#include<iostream>
#include<vector>

using namespace std;

vector<int> Product(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1);

    for(int i=1; i<n; i++) {
        ans[i] = ans[i-1] * nums[i-1];
    }

    int suffix = 1;

    for(int i= n-2; i>=0; i--) {
        suffix*= nums[i + 1];
        ans[i] *= suffix;
    }
    return ans;
}

int main() {
    vector<int> nums = {2,3,4,1};
    vector<int> result = Product(nums);

    cout<<"Array = ";
    for(int i=0;i<result.size();i++) {
        if(i) cout<<" ";
        cout<<result[i];
    }
    cout<<endl;
    return 0;
}
