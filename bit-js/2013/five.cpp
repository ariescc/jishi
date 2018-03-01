#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

struct node {
    int fir, sec;
}nod[105];

bool cmp(node nd1, node nd2)
{
    if(nd1.fir < nd2.fir) {
        return true;
    }
    else if(nd1.fir == nd2.fir) {
        if(nd1.sec < nd2.sec) {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> nod[i].fir >> nod[i].sec;
    }
    sort(nod, nod + n, cmp);
    cout << "***************************"<< endl;
    for(int i = 0; i < n; i++) {
        cout << nod[i].fir << " " << nod[i].sec << endl;
    }
    return 0;
}
