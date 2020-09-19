#include <bits/stdc++.h>

using namespace std;

#ifdef DEBUG
#define cout fout
#define cin fin
ifstream fin("in.txt");
ofstream fout("out.txt");
#endif

int main() {
    vector<string> str;
    string in;
    int imax = 0;
    while (getline(cin, in)) {
        imax = max(imax, int(in.size()));
        str.push_back(in);
    }
    for(int i=0;i<imax;i++,cout<<endl)
        for(int j=str.size()-1;j>=0;j--)
            cout<<str[j][i];
    return 0;
}