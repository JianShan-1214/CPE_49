#include <bits/stdc++.h>

using namespace std;

#ifdef DEBUG
#define cout fout
#define cin fin
ifstream fin("in.txt");
ofstream fout("out.txt");
#endif

int main(){
    long long int n,d;
    while(cin>>n>>d){
        long long int day=1;
        while(day<=d){
            day+=n;
            n++;
        }
        cout<<n-1<<endl;
    }
    return 0;
}