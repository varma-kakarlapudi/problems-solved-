#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c,k;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        if(n%2!=0)
            printf("YES\n");
        else{
            c=0;
            k=n+1;
            for(int i=2;i<n;i++)
            {
                if(k > i)
                {
                    if(k%i==0)
                    {
                        
                        k=k/i;
                        c++;
                    }
                }
                else{
                    if(i > k && k < n-1){
                        k=1;
                        c=99;
                        break;
                    }
                }
            }
            if(c==99)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
}
