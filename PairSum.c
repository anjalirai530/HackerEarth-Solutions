#include<stdio.h>
int main(){
	int n,i=0,count=0,k,flag=0;
	
	scanf("%d %d",&n,&k);
	int A[n];
	for(i=0;i<n;i++)
	   scanf("%d",&A[i]);
	int max = A[0];
	for(i=0;i<n;i++)
	{
		if(max<A[i])
		{
			max=A[i];
		}
	}
	int H[max];
	for(i=0;i<max;i++)
	H[i] = 0;
	for(i=0;i<n;i++)
	{
		if(k-A[i]>0 && H[k-A[i]]!=0)
		{
			flag=1;
			break;
		}
		H[A[i]]++;
	}
	if(flag == 1)
	printf("YES");
	else
	printf("NO");
}