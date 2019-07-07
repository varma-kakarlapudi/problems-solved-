#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,k,a=0,len;
	cin>>n;
	p=n;

	k=(2*n)-1;
	len=k;
	int arr[k][k];	
	while(len--)
	{
		for(int i=a;i<k-a;i++)
		{
			for(int j=a;j<k-a;j++)
			{
				if(i==a || j==a || j==(k-a-1) || i==(k-a-1) )
				{
					arr[i][j]=p;
				}
			}
		}
		p--;
		a++;
	}
	
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<k;j++)
		{
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}
		
}
