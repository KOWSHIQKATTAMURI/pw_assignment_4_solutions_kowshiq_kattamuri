#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> top, bottom;
        for(auto i : nums1){
            top[i]++;
        }
        for(auto i : nums2){
            bottom[i]++;
        }
        vector<int> left, right;
        for(auto it : top){
            if(bottom[it.first] == 0){
                left.push_back(it.first);
            }
        }
        for(auto it : bottom){
            if(top[it.first] == 0){
                right.push_back(it.first);
            }
        }
        vector<vector<int>> ans;
        ans.push_back(left);
        ans.push_back(right);
        return ans;
    }


int main(){
    int x, y;
    cin >> x >> y;
    vector<int> a(x), b(y);
    for(int i = 0; i < x; i++){
        cin >> a[i];
    }
    for(int i = 0; i < y; i++){
        cin >> b[i];
    }
    vector<vector<int>> ans = findDifference(a, b);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
