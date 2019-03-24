#include<iostream>
using namespace std;
int dec_to_bin(int);
int power(int,int);
int bin_to_dec(int);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,g;
		cin>>n;
		//cout<<n<<"\n";
		k=dec_to_bin(n);
		g=bin_to_dec(k);
		printf("%d\n",g);
	}


}
int bin_to_dec(int k)
{
	int f=0,i=0,rem;
	while(k!=0)
	{
		rem = k%10;
		k = k/10;
		f = f + (rem * power(2,i));
		i++;
	}
	return f;
}

int dec_to_bin(int a)
{
	int val=0,rem;
	while(a!=0)
	{
		rem = a%2;
		val = rem + (val*10);
		//printf("val = %d\n",val);
		a = a/2 ;
	}
	return val;
	
}

int power(int k,int i)
{
	int ans=1;
	for(int j=1;j<=i;j++)
	{
		ans=ans*2;
	}
	return ans;
}
