#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d",&n);
    for(i=1;i<3*n+3;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1||j==5)
			{
				printf("*");
			}
		    else if(i%3==0)
			{
				printf("*");
			}
			else{
				printf(" ");
			}

		}
		printf("\n");
	}
}