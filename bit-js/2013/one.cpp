#include<iostream>
#include<cstdio>

using namespace std;

int k, n;

int number(int x)
{
    int num = 0;
    for(int i = 0; i < x; i++) {
        num = num * 10 + k;
    }
    return num;
}

int main()
{
    cin >> k >> n;
    int res = 0;
    for(int i = 1; i <= n; i++) {
        res += number(i);
    }
    cout << res << endl;
    return 0;
}
