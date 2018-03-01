#include<iostream>
#include<cstdio>

int main()
{
    int n;
    std::cin >> n;
    int sz = 2*(n-1)+n;
    for(int i = 0; i < n; i++) {
        int row;
        if(!i) row = n;
        else row = 2*i+n;
        for(int j = 0; j <= (sz - row) / 2; j++) {
            std::cout << " ";
        }
        for(int j = 0; j < row; j++) {
            std::cout << "*";
        }
        for(int j = 0; j <= (sz - row) / 2; j++) {
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
