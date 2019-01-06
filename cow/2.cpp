#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string str;
    while(cin >> str) {
        for(int i = 0; i < str.length(); i++) {
            int ascii = str[i];
            int k, cnt = 0;
            vector<int> v;
            while(ascii != 0) {
                k = ascii % 2;
                ascii >>= 1;
                v.push_back(k);
                if(k == 1) cnt++;
            }
            while(v.size() != 7) v.push_back(0); // 不足7位首位补零
            if(cnt & 1) v.push_back(0);
            else v.push_back(1);
            for(int j = v.size()-1; j >= 0; j--) cout << v[j];
            cout << endl;
        }
    }
    return 0;
}
