#include <iostream>
#include <cstdio>

int main()
{
    int n;
    std::cin >> n;
    for(int i = 0; i < n + 1; i++) {
        int fir = n + 1 - i;
        int sec;
        if (!i) sec = 0;
        else sec = 2 * i - 1;
        int tir = 2*n+1-fir-sec;
        for(int j = 0; j < fir; j++) {
            std::cout << "*";
        }
        for(int j = 0; j < sec; j++) {
            std::cout << " ";
        }
        for(int j = 0; j < tir; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for(int i = n - 1; i >= 0; i--) {
        int fir = n + 1 - i;
        int sec;
        if(!i) sec = 0;
        else sec = 2 * i - 1;
        int tir = 2 * n + 1 - fir - sec;
        for(int j = 0; j < fir; j++) {
            std::cout << "*";
        }
        for(int j = 0; j < sec; j++) {
            std::cout << " ";
        }
        for(int j = 0; j < tir; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
