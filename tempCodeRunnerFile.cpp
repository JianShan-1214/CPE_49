#include <bits/stdc++.h>

using namespace std;

#ifdef DEBUG
#define cout fout
#define cin fin
ifstream fin("in.txt");
ofstream fout("out.txt");
#endif

int main() {
    int n;
    cin >> n;
    char c;
    vector<int> text(256);
    while (cin >> c) {
        if (isalpha(c))
            text[int(toupper(c))]++;
    }
    vector<pair<int,char> > ans;
    for (int i = 0; i < 256; i++)
        if (text[i])
            ans.push_back({text[i],char(i)});
    sort(ans.rbegin(),ans.rend());
    for (auto [i, c] : ans)
        cout << c << " " << i << endl;
    return 0;
}