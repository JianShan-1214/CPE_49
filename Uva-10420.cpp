#include <bits/stdc++.h>

using namespace std;

#ifdef DEBUG
#define cout fout
#define cin fin
ifstream fin("in.txt");
ofstream fout("out.txt");
#endif

int main() {
    int kase;cin>>kase;
    map<string, int> ans;
    while (kase--) {
        string s;
        cin>>s;
        ans[s]++;
        cin>>s>>s;
    }
    for(auto[str,i] : ans)
            cout<<str<<" "<<i<<endl;
    return 0;
}