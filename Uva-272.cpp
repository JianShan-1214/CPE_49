#include <bits/stdc++.h>

using namespace std;

#ifdef DEBUG
#define cout fout
#define cin fin
ifstream fin("in.txt");
ofstream fout("out.txt");
#endif

int main() {
    string s;
    bool fl = 1;
    while (getline(cin, s)) {
        while (s.find("\"")!=string::npos) {
            if (fl)
                s = s.replace(s.find_first_of("\""), 1, "``");
            else
                s = s.replace(s.find_first_of("\""), 1, "\''");
            fl = !fl;
        }
        cout << s << endl;
    }
    return 0;
}