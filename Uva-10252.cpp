#include <bits/stdc++.h>

using namespace std;

#ifdef DEBUG
#define cout fout
#define cin fin
ifstream fin("in.txt");
ofstream fout("out.txt");
#endif
int imin, idx[2][30];
int main() {
    string s1, s2;
    while (getline(cin, s1)) {
        getline(cin, s2);
        memset(idx, 0, sizeof(int) * 2 * 30);
#define idx(x) idx[x][e - 'a']
        for (auto& e : s1)
            ++idx(0);
        for (auto& e : s2)
            idx(1) = min(idx(0), idx(1) + 1);
        imin = *min_element(idx[1], idx[1] + 30, [](int a, int b) {
            if(!a || !b)return !!a;return a<b; });
        function<void(int&)> output = [](int& a) {
            if(a==imin)cout<<char('a'+(&a-idx[1])); };
        for_each(idx[1], idx[1] + 30, output);
        cout << endl;
    }
    return 0;
}