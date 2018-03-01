#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    int i = 0, j = 0;
    while(i < str1.length() && j < str2. length()) {
        if(str1[i] < str2[j]) {
            cout << str1[i];
            i++;
        }
        else if(str1[i] > str2[j]) {
            cout << str2[j];
            j++;
        }
        else {
            cout << str1[i] << str2[j];
            i++, j++;
        }
    }
    if(i >= str1.length()) {
        for(int k = j; k < str2.length(); k++) {
            cout << str2[k];
        }
    }
    else if(j >= str2.length()) {
        for(int k = i; k < str1.length(); k++) {
            cout << str1[k];
        }
    }
    return 0;
}
