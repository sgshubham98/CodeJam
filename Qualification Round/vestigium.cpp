#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for(int tc=1; tc<=t; tc++){
        int n; cin >> n;
        int trace = 0;
        int row = 0, col = 0;
        int tmp;
        vector<set<int>> vsr(n+1), vsc(n+1);
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cin >> tmp;
                vsr[i].insert(tmp);
                vsc[j].insert(tmp);
                if(i==j)
                    trace += tmp;
            }
        }
        for(int i=1; i<=n; i++){
            if(vsr[i].size()<n)
                row += 1;
        }
        for(int i=1; i<=n; i++){
            if(vsc[i].size()<n)
                col += 1;
        }
        cout << "Case #" << tc << ": " << trace << " " << row << " " << col << "\n";
    }
}