#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>

using namespace std;

int n;
int cnt = 0;
string str = "abc";

void mkstr(string cur, int len)
{
    if(len == n) {
        cout << cur << " ";
        cnt++;
        return;
    }
    mkstr(cur + str[0], len + 1);
    mkstr(cur + str[1], len + 1);
    mkstr(cur + str[2], len + 1);
}

int main()
{
    cin >> n;
    mkstr("", 0);
    cout << cnt << endl;
    return 0;
}

