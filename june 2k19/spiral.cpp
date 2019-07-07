#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p=1,k;
	cin>>n;
	k=n+1;
	int a=0,b=0,c=n-1,d=n-1;
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			arr[i][j]=0;
		}
	}
	while(k--)
	{
		//top rowww
	
		for(int i=a;i<n-a-1;i++)
		{
			arr[a][i]=p;
			p++;
		}
		if((n*n)< p)
				break;		
		//last columnnn
	
		for(int j=b;j<n-b-1;j++)
		{
			arr[j][d]=p;
			p++;		
		}
		if((n*n)< p)
				break;
		
		//bottom  rowwww
			
		for(int i=n-a-1;i>a;i--)
		{
			arr[c][i]=p;
			p++;		
		}
		if((n*n)< p)
				break;
		
		//1st columnnn
				
		for(int j=n-b-1;j>b;j--)
		{
			arr[j][b]=p;
			p++;		
		}
		if((n*n)< p)
				break;
		a++;
		b++;
		c--;
		d--;
	}
	
	if(n%2!=0)
	{
		int s=n/2;
		arr[s][s]=n*n;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}
	
}
