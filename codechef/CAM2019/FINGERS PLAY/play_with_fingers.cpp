#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d",&n);
        m=n%8;
        if(m==1){
            printf("thumb\n");
        }
        else if(m==2 || m==0){
            printf("index finger\n");
        }
        else if(m==3 || m==7){
            printf("middle finger\n");
        }
        else if(m==4 || m==6){
            printf("ring finger\n");
        }
        else
        {
            printf("little finger\n");
        }
    }
    return 0;
}

