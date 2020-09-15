#include <bits/stdc++.h>

using namespace std;

#ifdef DEBUG
#define cout fout
#define cin fin
ifstream fin("in.txt");
ofstream fout("out.txt");
#endif

int main() {
    int kase;
    cin >> kase;
    while (kase--) {
        int n,mid;
        int ans=0;
        cin >> n;
        vector<int> nums(n);
        for (auto& i : nums) cin >> i;
        sort(nums.begin(), nums.end());
        mid = nums[n/2];
        for(auto& i :nums) 
            ans+=abs(i-mid);
        cout<<ans<<endl;
    }
    return 0;
}