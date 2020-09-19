#include <bits/stdc++.h>

using namespace std;

#ifdef DEBUG
#define cout fout
#define cin fin
ifstream fin("in.txt");
ofstream fout("out.txt");
#endif

int f(int n){
    if(n<10) return n;
    return f(f(n/10)+n%10);
}

int main(){
    int n;
    while(cin>>n,n){
        cout<<f(n)<<endl;
    }
    return 0;
}