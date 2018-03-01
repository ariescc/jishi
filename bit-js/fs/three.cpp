#include<cstdio>

char str[105];

void strlength(int pos)
{
    if(str[pos] == '\0') {
        printf("%d\n", pos);
        return;
    }
    strlength(pos + 1);
}

int main()
{
    scanf("%s", str);
    strlength(0);
    return 0;
}

