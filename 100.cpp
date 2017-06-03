#include<iostream>
#include<cstdio>
#include<math.h>
#include<cstring>
using namespace std;
int cycle_len(unsigned int n){
    int t=1;
    while(n!=1){
                if(n%2==0){
                    n=n/2;
                    t++;
                }
                else{
                    n=(3*n)+1;
                    t++;
                }
            }
            return t;
}
int maximum(unsigned int a, unsigned int b){
    int maxi=1,temp;
    for(int i=a;i<=b;i++){
            temp = cycle_len(i);
            if(temp > maxi){
                maxi = temp;
            }

        }
        return maxi;
}

int main()
{
    unsigned int a,b,max_value;


    while(scanf("%d%d",&a,&b) != EOF){
        if(a==b){
            max_value = cycle_len(a);
        }
        else if(a<=b){
            max_value = maximum(a, b);
        }
        else {
            max_value = maximum(b, a);
        }
        cout<<a<<" "<<b<<" "<<max_value<<endl;

   }
    return 0;
}
