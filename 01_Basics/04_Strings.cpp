#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Rupam";
    int len = s.size();
    s[len-1] = 'z';
    cout << s[len-1];
    cout << '\n' << s;

    return 0;
}