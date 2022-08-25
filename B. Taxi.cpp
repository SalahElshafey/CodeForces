#include<stdio.h>
#include<string.h>
int main()
{
	
	int a1,a2,a3;
	int i,n,c,l;
	while(scanf("%d",&n)!=EOF)
	{
		i=0;
		c=0;a1=0,a2=0,a3=0;
		while(i<n)
		{
			scanf("%d",&l);
			if(l==4) c++;
			else if(l==1) a1++;
			else if(l==2) a2++;
			else if(l==3) a3++;
			i++;
		}
		if(a3<a1)
		{
			c+=a3;
			a1-=a3;
			a3=0;
		}
		else
		{
			c+=a3;
			a1=0;a3=0;
		}
		c+=a2/2;
		if(a2%2)
		{
			c++;a1-=2;
		}
		if(a1>0)
		{
			c+=a1/4;
			if(a1%4) c++;
		}
		printf("%d\n",c);
	}
	return 0;
}
