#include<stdio.h>
int main(){
	int n,k,i;
	scanf("%d %d",&n,&k);
	int A[n];
	for(i=0;i<n;i++)
	  scanf("%d",&A[i]);
	  int j,max;
    for(i=0;i<=n-k;i++)
	{
		max=A[i];
		for(j=1;j<k;j++)
		{
			if(A[i+j]>max)
			{
				max=A[i+j];
			}
		}
		printf("%d ",max);
	}
	
	
}