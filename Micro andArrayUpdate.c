#include<stdio.h>

int main(){
	int test,n,k,i;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d %d",&n,&k);
		int A[n];
		for(i=0;i<n;i++)
           scanf("%d",&A[i]);
	    int min=A[0];
		for(i=0;i<n;i++)
		{
			if(min>A[i])
			{
				min=A[i];
			}
		}

		  if(k>min)

            printf("%d\n",k-min);

        else

            printf("0\n");

    
	}
}