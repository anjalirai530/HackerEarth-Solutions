#include<stdio.h>

 int main()

{

    int n,i,arr[100000],t,count,j;

    scanf("%d",&t);
    

	while(t>=1)
	{
         scanf("%d",&n);
		 for(i=0;i<n;i++)
        {

            scanf("%d ",&arr[i]);
        }
		for(i=0;i<n;i++)
        {
			count=0;
			for(j=0;j<n;j++)
			{
                 if(arr[i]==arr[j])
				 {
					 count++;
				 }

			}
			if(count==1)
			{
				printf("%d\n",arr[i]);
			}
		}
		t--;

	}
}