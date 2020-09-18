#include <bits/stdc++.h>

using namespace std;

#ifdef DEBUG
#define cout fout
#define cin fin
ifstream fin("in.txt");
ofstream fout("out.txt");
#endif

int main() {
    string keyboard = " `1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    string in;
    while (getline(cin, in)) {
        for (auto i : in) {
            if (i == ' ')
                cout << i;
            else
                cout << keyboard[keyboard.find(tolower(i)) - 2];
        }
        cout << endl;
    }
    return 0;
}