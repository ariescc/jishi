#include<iostream>
#include<cstdio>

using namespace std;

int n;

int jccal(int x)
{
    if(x == 1)
        return 1;
    return x*jccal(x-1);
}

int main()
{
    cin >> n;
    int res = 0;
    for(int i = 1; i <= n; i++) {
        res += jccal(i);
    }
    cout << res << endl;
    return 0;
}
