#include<bits/stdc++.h>
using namespace std;

int maxCount(int m, int n, vector<vector<int>>& ops){
    int row = m, col = n;
    for(auto it : ops){
        row = min(row, it[0]), col = min(col, it[1]);
    }
    return row*col;
}
    
int main(){
    int x, y;
    cin >> x >> y;
    vector<vector<int>> kow(x);
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            int a;
            cin >> a;
            kow[i].push_back(a);
        }
    }
    cout << maxCount(x, y, kow) << endl;
}
