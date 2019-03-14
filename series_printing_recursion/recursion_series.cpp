#include<stdio.h>
int rec(int);
int line(int);
int spaces(int);
int num=1,m=1,n;
int main()
{
	printf("enter a no : ");
	scanf("%d",&n);
	rec(n);
	
}

int rec(int p)
{
	if(p==1){
		printf("%d",num);
		return ;
	}
	else
	{
		line(p);
		p=p-1;
		printf("\n");
		spaces(m);
		m=m+1;
		rec(p);
	}
}

int line(int a)
{
	int k=a;
	if(k>0)
	{
		k=k-1;
		printf("%d\t",num);
		num++;
		line(k);
	}
	else{
		return;
	}
}


int spaces(int m)
{
	int s=m;
	if(s>0)
	{
		s=s-1;
		printf("\t");
		spaces(s);
	}
	else{
		return;
	}
}
