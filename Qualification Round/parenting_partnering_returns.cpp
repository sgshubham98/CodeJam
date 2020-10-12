#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for(int tc=1; tc<=t; tc++){
        int n; cin >> n;
        vector<pair<int, pair<int, int>>> vp(n);
        for(int i=0; i<n; i++){
            cin >> vp[i].first >> vp[i].second.first;
            vp[i].second.second = i;
        }
        sort(vp.begin(), vp.end());
        int c=0, j=0;
        bool f = true;
        vector<string> res(n);
        for(int i=0; i<n; i++){
            if(vp[i].first>=c)
                c = vp[i].second.first, res[vp[i].second.second] ="C";
            else if(vp[i].first>=j)
                j = vp[i].second.first, res[vp[i].second.second] ="J";
            else{
                f = false;
                break;
            }
        }
        cout << "Case #" << tc << ": ";
        if(f)
        	for(auto i: res) cout << i;
        else
        	cout << "IMPOSSIBLE";
        cout << "\n";
    }
}