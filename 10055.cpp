#include<iostream>
#include<cstdio>
#include<math.h>
#include<cstring>
using namespace std;
int main()
{
    long long int h, op, result;
    while(scanf("%lld%lld",&h,&op) !=EOF){
        if(h<op){
            result = op-h;
        }
        else{
            result = h-op;
        }
        cout<<result<<endl;
    }

    return 0;
}
