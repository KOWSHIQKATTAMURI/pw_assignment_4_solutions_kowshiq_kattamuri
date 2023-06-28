#include<bits/stdc++.h>
using namespace std;

int arrayPairSum(vector<int>& nums){
    sort(nums.begin(), nums.end());
    int ans = 0;
    for(int i = 0; i < nums.size() - 1; i = i + 2){
        ans += min(nums[i], nums[i + 1]);
    }
    return ans;    
}
    
int main(){
    int x;
    cin >> x;
    vector<int> kow(x);
    for(int i = 0; i < x; i++){
        cin >> kow[i];
    }
    cout << arrayPairSum(kow) << endl;
}
