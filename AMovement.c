#include<stdio.h>


int main(){
	int n,sum=0,i;
     scanf("%d",&n);
	for(i=5;i>=1;i--)
	{
		if(n!=0)
		{
           sum=sum+n/i;
		   n=n%i;
		}
		
	}
	printf("%d\n",sum);
}
