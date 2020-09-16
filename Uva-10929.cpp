#include <bits/stdc++.h>

using namespace std;

#ifdef DEBUG
#define cout fout
#define cin fin
ifstream fin("in.txt");
ofstream fout("out.txt");
#endif

int main() {
    string num;
    while (cin >> num,num!="0") {
        int odd = 0, even = 0;
        bool k=0;
        for(int i=0;i<num.size();i++) {
            if(i%2==0)
                odd=odd+(num[i]-'0');
            else
                even=even+(num[i]-'0');
        }
        int ans;
        ans = abs(odd - even);
        if (ans % 11)
            cout << num << " is not a multiple of 11." << endl;
        else
            cout << num << " is a multiple of 11." << endl;
    }
    return 0;
}
