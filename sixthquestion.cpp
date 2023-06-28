#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums){
    multiset<int> kow;
    for(auto i : nums){
        kow.insert(pow(i, 2));
    }
    vector<int> res(kow.begin(), kow.end());
    return res;
}
    
int main(){
    int x;
    cin >> x;
    vector<int> kow(x);
    for(int i = 0; i < x; i++){
        cin >> kow[i];
    }
    vector<int> ans = sortedSquares(kow);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}
