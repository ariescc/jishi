#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    double n = 1;
    double res = 0.0;
    double jd;
    cin >> jd;
    while(4.0/(4*n-3) > jd) {
        res += pow(-1, n+1) * 4 / (4*n-3);
        n++;
    }
    int cnt = n-1;
    printf("%d %.8lf\n", cnt, res);
    return 0;
}
