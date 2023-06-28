#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix){
    int n = matrix.size(), m = matrix[0].size();
    vector<vector<int>> res(m, vector<int>(n, 0)); 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            res[j][i] = matrix[i][j]; 
        }
    }
    return res;
}
    
int main(){
    int x, y;
    cin >> x >> y;
    vector<vector<int>> kow(x);
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            int a;
            cin  >> a;
            kow[i].push_back(a);
        }
    }
    vector<vector<int>> ans = transpose(kow);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
