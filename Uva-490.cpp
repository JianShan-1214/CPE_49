#include <bits/stdc++.h>

using namespace std;

#ifdef DEBUG
#define cout fout
#define cin fin
ifstream fin("in.txt");
ofstream fout("out.txt");
#endif

int main() {
    string str[101];
    int imax = 0, n = 0;
    while (getline(cin, str[n])) {
        if (str[n].length() > imax)
            imax = str[n].length();
        n++;
    }
    cout<<1;
    for (int j = 0; j < imax; j++, cout << endl) {
        for (int i = n - 1; i >= 0; i--) {
            if (str[i].length() > j)
                cout << str[i][j];
            else
                cout << " ";
                
        }
    }
    return 0;
}