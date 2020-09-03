int main() {

    int t;

    scanf("%d",&t);

    while(t--)

    {

        int n,r[100],a[100],r1[100]={0},a1[100]={0},x,y;

       scanf("%d",&n);
        for(int i=0;i<n;i++)

        {

            
			scanf("%d",&r[i]);

        }

        for(int i=0;i<n;i++)

        {

            
			scanf("%d",&a[i]);

        }

        for(int i=0;i<n;i++)

        {

            r1[r[i]]++;

        }

        for(int i=0;i<n;i++)

        {

            a1[a[i]]++;

        }

        int max1=-1;

        for(int i=0;i<100;i++)

        {

            if(r1[i]>=max1)

            {

                max1=r1[i];

                x=i;

            }

        }

        int max2=-1;

        for(int i=0;i<100;i++)

        {

            if(a1[i]>=max2)

            {

                max2=a1[i];

                y=i;

            }

            

        }

                

        if(x>y)

        {

            printf("Rupam\n");


 

        }

        else if(x<y)

        {

            printf("Ankit\n");

        }

        else

       printf("Tie\n");


 

    }                                       // Reading input from

}

