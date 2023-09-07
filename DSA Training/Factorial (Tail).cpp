#include<stdio.h>
int fact(int n,int res)
{
	if(n==1 && n==0)
	return res;
	else
	return fact(n-1,n*res);	
}
int main()
{
	int num,res=1;
	printf("Enter the no. : ");
	scanf("%d",&num);
	int f=fact(num,res);
	printf("Factorial of %d = %d",num,f);
}
