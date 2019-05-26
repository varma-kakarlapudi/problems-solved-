#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q,n;
	cin>>q>>n;
	int arr[n]={0},brr[n+1]={0};
	while(q--)
	{
		int b,l=0,r=0,ans=0;
		cin>>b;
		arr[b]=1;
		brr[b]=1;
		int j=1;
		while(j!=n+1)
		{
			if(arr[j]==1)
			{
				b=j;
				
				for(int i=b-1;i>=0;i--)
				{
					if(brr[i] == 1)
					{
						l=i;
						break;
					}
				}
				
				for(int i=b+1;i<=n;i++)
				{
					if(brr[i]==1)
					{
						r=i;
						break;
					}
				}
				if(r==0)
				{
					r=n+1;
				}
				ans=ans+(r-1)+(l+1);
			}
			j++;
		}
		printf("%d",ans);
		
		
	}
}
