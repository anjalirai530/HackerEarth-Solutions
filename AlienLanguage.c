int main()

{

int n;

scanf("%d",&n);

while(n--)

{

int flag=0;

char jadu[100001],jhool[100001];

scanf("%s",jadu);
scanf("%s",jhool);

flag=0;

for(int i=0;i<strlen(jadu);i++)

{

for(int j=0;j<strlen(jhool);j++)

{

if(jadu[i]==jhool[j])

{

flag=1;

break;

}

}

}

if(flag==1)

{

printf("YES\n");

}

else

{

 printf("NO\n");


}

 

}


}