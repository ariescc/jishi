#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    string str, res = "";
    cin >> str;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] != '(' && str[i] != ')') {
            res += str[i];
        }
    }
    cout << res << endl;
    return 0;
}
