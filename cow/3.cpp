// 错误代码
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#define LOCAL
using namespace std;

struct stu {
    string name;
    int age, score;
};

// 判断a是否应该在b前面
bool alphax(stu a, stu b)
{
    int i = 0;
    while(a.name[i] == b.name[i] && i != a.name.length() && i != b.name.length()) i++;
    if(a.name.length() > b.name.length() && i == b.name.length()) return false;
    else if(a.name.length() < b.name.length() && i == a.name.length()) return true;
    else if(a.name.length() == b.name.length() && a.name[i] < b.name[i]) return true;
    else if(a.name.length() == b.name.length() && a.name[i] > b.name[i]) return false;
    else return a.age < b.age;
}

bool cmp(stu a, stu b)
{
    if(a.score == b.score) {
        return alphax(a, b);
    }
    return a.score < b.score;
}

int main()
{
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    int N;
    while(cin >> N) {
        struct stu students[1005];
        for(int i = 0; i < N; i++)
            cin >> students[i].name >> students[i].age >> students[i].score;

        sort(students, students + N, cmp);
        for(int i = 0; i < N; i++)
            cout << students[i].name << " " << students[i].age << " " << students[i].score << endl;
    }
    return 0;
}
