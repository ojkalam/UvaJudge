#include<iostream>
#include<cstdio>
#include<math.h>
#include<cstring>
using namespace std;
int main()
{
    char ch[1000];
    int len;
    while(gets(ch)){
        len = strlen(ch);
        for(int i=0;i<len;i++){
            printf("%c",ch[i]-7);
        }
        cout<<endl;
    }

    return 0;
}

