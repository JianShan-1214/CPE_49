#include <bits/stdc++.h>

using namespace std;

#ifdef DEBUG
#define cout fout
#define cin fin
ifstream fin("in.txt");
ofstream fout("out.txt");
#endif

int main() {
    int n;
    while (cin >> n) {
        vector<int> nums(n);
        vector<bool> count(n, 0);
        bool k = 1;
        for (auto& i : nums)
            cin >> i;
        for (int i = 1; i < nums.size(); i++) {
            int temp = abs(nums[i] - nums[i - 1]);
            if (temp > n || temp == 0 || count[temp]) {
                k = 0;
                break;
            }
            count[temp] = 1;
        }

        if (k)
            cout << "Jolly\n";
        else
            cout << "Not jolly\n";
    }
    return 0;
}