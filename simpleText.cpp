#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s = "";
    int n;
    cin >> n;
    vector<string> v;
    for(int i = 0; i < n; i++){
        string t, r;
        cin >> t;
        if(t != "4") cin >> r;

        if(t == "1"){
            v.push_back(s);
            s += r;
        }
        else if( t == "2"){
            v.push_back(s);
            s.erase(s.end() - stoi(r), s.end());
        }
        else if(t == "3"){ cout << s[stoi(r)-1] << endl; }
        else {
            s = v.back();
            v.pop_back();
        }
    }
    return 0;
}
