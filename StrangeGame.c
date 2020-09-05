/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<stdio.h>
int main(){
	int test,n,k,i;
	scanf("%d",&test);
    while(test--)
	{
		scanf("%d %d",&n,&k);
	     int A[n],B[n];
		for(i=0;i<n;i++)
		   scanf("%d",&A[i]);
	     for(i=0;i<n;i++)
		   scanf("%d",&B[i]);
		int max = B[0];
		for(i=0;i<n;i++)
		{
			if(max<B[i])
			{
				max=B[i];
			}
		}
		max=max+1;
		long long int sum = 0;
		for(i=0;i<n;i++)
		{
            if(max > A[i])
			{
				sum =sum + (max- A[i]);
			}
		}
		long long int mul=sum*k;

        printf("%lld\n",mul);

	}
}