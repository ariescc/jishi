#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

bool cmp_ev(int x, int y)
{
    return x < y;
}

bool cmp_odd(int x, int y)
{
    return x > y;
}

int main()
{
    int num;
    vector<int> ev_arr, odd_arr;
    while(~scanf("%d", &num)) {
        if(num & 1) {
            ev_arr.push_back(num);
        }
        else {
            odd_arr.push_back(num);
        }
    }
    sort(ev_arr.begin(), ev_arr.end(), cmp_odd);
    sort(odd_arr.begin(), odd_arr.end(), cmp_ev);

        for(int i = 0; i < ev_arr.size(); i++) {
        cout << ev_arr[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < odd_arr.size(); i++) {
        cout << odd_arr[i] << " ";
    }

    return 0;
}
