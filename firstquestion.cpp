#include<bits/stdc++.h>
using namespace std;

vector<int> arraysIntersection(vector<int>& A, vector<int>& B, vector<int>& C){
    int i = 0, j = 0, k = 0, R = A.size(), S = B.size(), T = C.size();
    vector<int> ans;
    while(i < R && j < S && k < T){
        int a = A[i], b = B[j], c = C[k];
        if(a == b && b == c){
            ans.push_back(a);
            ++i, ++j, ++k;
        }else{
            int mx = max({a, b, c});
            if(a < mx){
                ++i;
            }
            if(b < mx){
                ++j;
            }
            if(c < mx){
                ++k;
            }
        }
    }
    return ans;
}

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    vector<int> a(x), b(y), c(z);
    for(int i = 0; i < x; i++){
        cin >> a[i];
    }
    for(int i = 0; i < y; i++){
        cin >> b[i];
    }
    for(int i = 0; i < z; i++){
        cin >> c[i];
    }
    vector<int> ans = arraysIntersection(a, b, c);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}
