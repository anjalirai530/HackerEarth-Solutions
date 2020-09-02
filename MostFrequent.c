#include<stdio.h>
int main(){
	int arr[100000];
	int n,count,max=0,rw,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)

    {

        scanf("%d",&arr[i]);

    }
  for( i=0;i<n;i++)
  {
	  count=0;
	  for( j=0;j<n;j++)
	  {
		  if(arr[i]==arr[j])
		  {
			  count++;
			  if(count>max)
			  {
				  max=count;
				  rw=arr[i];

			  }
		  }
	  }
  }
  printf("%d",rw);
}