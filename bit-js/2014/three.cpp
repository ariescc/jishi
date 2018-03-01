#include<iostream>
#include<cstdio>

using namespace std;

bool jgnum(int i)
{
    int one = i / 1000;
    int two = (i / 100) % 10;
    int three = (i / 10) % 10;
    int four = i % 10;
    if(one != two && one != three && one != four
            && two != three && two != four
            && three != four)
    {
        return true;
    }
    else return false;
}

int main()
{
    int a, b;
    cin >> a >> b;
    for(int i = a + 1; i < b; i++) {
        if(jgnum(i)) {
            cout << i << " ";
        }
    }
    return 0;
}

