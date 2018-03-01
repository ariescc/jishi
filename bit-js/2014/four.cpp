#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<map>

using namespace std;

int main()
{
    string str;
    cin >> str;
    map<int, int> mp; // 标记字符出现的位置 及 以该字符起始的字符平台的长度
    for(int i = 0; i < str.length(); i++) {
        int j = i + 1;
        while(str[j] == str[i]) {
            j++;
        }
        mp[i] = j - i;
    }
    map<int, int>::iterator p;
    /*for(p = mp.begin(); p != mp.end(); p++) {
        cout << "location: " << p -> first << " " << "length: " << p -> second << endl;
    }*/

    int max = -1;
    for(p = mp.begin(); p != mp.end(); p++) {
        if(p -> second > max)
            max = p -> second;
    }

    for(p = mp.begin(); p != mp.end(); p++) {
        if(p -> second == max) {
            cout << p -> first + 1 << ", " << str[p -> first] << endl;
        }
    }
    return 0;
}

