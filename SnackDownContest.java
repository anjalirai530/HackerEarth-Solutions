int main()

{

    int t;

    scanf("%d",&t);

    while(t--)

    {

        int n;

        scanf("%d",&n);

        int p;

       scanf("%d",&p);

        int a[p];

        for(int i=0;i<p;i++)

        {

            //cin>>a[i];
			scanf("%d",&a[i]);

        }

        int q;

        //cin>>q;
		scanf("%d",&q);

     int b[q];

        for(int i=0;i<q;i++)

        {

            // cin>>b[i];
			scanf("%d",&b[i]);

        }

        int h[n+1];
		for(int i=0;i<n+1;i++)
		h[i]=0;

        for(int i=0;i<p;i++)

        {

            h[a[i]]++;

        }

        for(int i=0;i<q;i++)

        {

            h[b[i]]++;

        }

        int count=0;

        for(int i=1;i<=n;i++)

        {

         if(h[i]!=0)

         {

         count++;

         }

        }

        if(count==n)

        {

        printf("YES\n");

        }

        else

        {

         printf("NO\n");


        }


 

    }

}