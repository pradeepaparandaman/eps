#include<stdio.h>
int main()
{
	int a,s=0,c,n,r,t,d,e;
	scanf("%d",&a);
	r=a;
	while (a>0)
	{
		c=a%10;
		s=(s*10)+c;
		a=a/10;	
	}
	printf("%d\t",s);
	n=rev(r);
	t=rev1(r);
	printf("%d\t",t);
	d=rev2();
	e=rev3();
	printf("%d\t",d);
}
int rev(int a)
{
int c,s=0;
while (a>0)
	{
		c=a%10;
		s=(s*10)+c;
		a=a/10;	
	}
	printf("%d\t",s);
}
int rev1(int b)
{
int c,s=0;
while (b>0)
	{
		c=b%10;
		s=(s*10)+c;
		b=b/10;	
	}
	return s;
}
int rev2()
{
int c,s=0,v;
scanf("%d",&v);
while (v>0)
	{
		c=v%10;
		s=(s*10)+c;
		v=v/10;	
	}
	return s;
}
int rev3()
{
int c,s=0,p;
scanf("%d",&p);
while (p>0)
	{
		c=p%10;
		s=(s*10)+c;
		p=p/10;	
	}
	printf("%d\t",s);
}
