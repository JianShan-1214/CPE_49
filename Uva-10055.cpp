#include <bits/stdc++.h>

using namespace std;

#ifdef DEBUG
#define cout fout
#define cin fin
ifstream fin("in.txt");
ofstream fout("out.txt");
#endif

int main() {
    long long int n, m;
    while (cin >> n >> m) {
        cout << abs(m - n) << endl;
    }
    return 0;
}