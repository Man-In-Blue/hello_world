#include<stdio.h>
int main(void)
{
	int fac(int k);
	int m,n,c;
	printf("请输入m与n的值(m>n):");
	scanf("%d%d",&m,&n);
	c=fac(m)/(fac(n)*fac(m-n));
	printf("c=%1d\n",c);
	return 0; 
}
int fac(int k)
{
	int i,j;
	for(i=1,j=1;i<=k;i++)
	j*=i;
	return j;
}
