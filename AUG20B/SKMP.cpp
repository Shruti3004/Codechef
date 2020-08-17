#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s, p, d, ds, ans, answer;
        cin >> s >> p;
        int pos =0 , x = 0;
        d = p;
        if (s.length() == p.length()) {
            cout << p << "\n";
        } else {
            for (int i = 1; i < p.length(); i++) {
                if (p[i] < p[0]) {
                    x = 1;
                    break;
                }
                if (p[i] > p[0]) {
                    break;
                }
            }
            sort(s.begin(), s.end());
            sort(p.begin(), p.end());

            for (int i = 0, a = 0; i < s.length(); i++) {
                if (!(s[i] == p[a])) {
                    ds += s[i];
                } else {
                    a++;
                }
            }
            if (x == 1) {
                for (int i = 0; i < ds.length(); i++) {
                    if (ds[i] < d[0]) {
                        ans += ds[i];
                        continue;
                    } else {
                        pos = i;
                        break;
                    }
                }
            } else {
                for (int i = 0; i < ds.length(); i++) {
                    if (ds[i] <= d[0]) {
                        ans += ds[i];
                        continue;
                    } else {
                        pos = i;
                        break;
                    }
                }
            }
            ds.erase(0, pos);
            if (ans.length() == 0) {
                answer += d + ds;
                for (int i = 0; i < s.length(); i++)
                    cout << answer[i];
                cout << "\n";
            } else if (ds.length() == 0) {
                answer += ds + ans;
                for (int i = 0; i < s.length(); i++)
                    cout << answer[i];
                cout << "\n";
            } else {
                answer += ans + d + ds;
                // cout<<ans<<d<<ds<<"\n";
                //if(answer.length() != s.length()){
                //    answer.erase(answer.length(), s.length());
                //}
                //cout<<answer<<"\n";
                for (int i = 0; i < s.length(); i++)
                    cout << answer[i];
                cout << "\n";
            }
        }
    }
    return 0;
}
