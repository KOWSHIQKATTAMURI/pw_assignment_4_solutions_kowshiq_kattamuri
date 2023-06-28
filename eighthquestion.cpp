#include<bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n){
    for(int i = 0; i < n; i++){
        nums[i + n] += nums[i]*1005;
    }
    for(int i = 0; i < n; i++){
        nums[2*i] = nums[i + n]/1005;
        nums[2*i + 1] = nums[i + n]%1005;
    }
    return nums;
}
    
int main(){
    int x;
    cin >> x;
    vector<int> nums(2*x);
    for(int i = 0; i < x; i++){
        cin >> nums[i];
    }
    vector<int> ans = shuffle(nums, x);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
