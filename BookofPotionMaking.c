

// Write your code here
#include<stdio.h>
int main(){
	int n,t,i=10,count=0,sum=0;
	scanf("%d",&n);
	while(i--)
	{
		sum=sum+n%10*(i+1);
		
		n=n/10;
		if(n==0)
		{
			break;
		}
     
	   
      
	}
	if(sum % 11 == 0 && i == 0)
	  printf("Legal ISBN");
	else
	  printf("Illegal ISBN");
}