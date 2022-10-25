#include <bits/stdc++.h>
using namespace std;

int main(){
    long n , k;
    cin >> n >> k;
    vector<long> v;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());
    long minD = 1e10;
    for (int i = k-1; i <= n-1 ; i++) minD = min(v[i]-v[i-(k-1)], minD);

    cout << minD;
}
