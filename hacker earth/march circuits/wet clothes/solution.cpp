#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,g;
    cin>>n>>m>>g;
    int arr[n],brr[m],max1=0,ans=0,max;
    cin>>arr[0];
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        max = arr[i] - arr[i-1];
        if(max1 < max)
        {
            max1 = max;
        }
    }
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
    }
    sort(brr,brr+m);
    
    if(g>0)
    {
        for(int i=0;i<m;i++)
        {
            if(brr[i] <= max1)
            {
                ans++;
            }
        }
        printf("%d",ans);
    }
}
