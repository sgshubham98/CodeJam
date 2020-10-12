#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for(int tc=1; tc<=t; tc++){
        string s; cin >> s;
        cout << "Case #" << tc << ": ";
        int cnt = 0;
        for(int i=0; i<s.length(); i++){
            if((s[i]-'0')>cnt)
                while((s[i]-'0')>cnt)
                    cout << "(", cnt++;
            else if((s[i]-'0')<cnt)
                while((s[i]-'0')<cnt)
                    cout << ")", cnt--;
            cout << s[i];
        }
        for(;cnt--;)
            cout << ")";
        cout << "\n";
    }
}