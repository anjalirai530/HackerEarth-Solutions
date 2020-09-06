#include<stdio.h>

main()

{

    int test,n,A[100000],i,count,max;

    scanf("%d",&test);

    while(test--)

    {

        count=0;

        scanf("%d",&n);

        for(i=0;i<n;i++)

        {

        scanf("%d",&A[i]);

        }

        max=A[0];

        for(i=0;i<n;i++)

        {

            if(A[i]<=max)

            {

                max=A[i];

                count++;

            }

        }

        

        printf("%d\n",count);

    }

}


