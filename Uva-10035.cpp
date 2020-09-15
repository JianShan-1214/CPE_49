#include <bits/stdc++.h>

using namespace std;

#ifdef DEBUG
#define cout fout
#define cin fin
ifstream fin("in.txt");
ofstream fout("out.txt");
#endif

int main() {
    int a, b;
    while (cin >> a >> b, (a||b)) {
        int ans = 0;
        int k = 0;
        while (a || b) {
            int i = a % 10, j = b % 10;
            k += i + j;
            if (k > 9)
                ans++;
            a /= 10;
            b /= 10;
            k /= 10;
        }
        if (!ans)
            cout << "No carry operation." << endl;
        else if (ans == 1)
            cout << ans << " carry operation." << endl;
        else
            cout << ans << " carry operations." << endl;
    }
    return 0;
}