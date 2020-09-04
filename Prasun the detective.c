#include<stdio.h>
int main(){
	char MR[50];
	char PG[50];
	int i,flag=0;
	gets(MR);
	gets(PG);
	int H[26] = {-1};
	for(i=0;i<strlen(MR);i++)
	{
		if(MR[i]>=65 && MR[i]<=90)
		   MR[i] = MR[i] + 32;
	}
	for(i=0;i<strlen(PG);i++)
	{
		if(PG[i]>=65 && PG[i]<=90)
		   PG[i] = PG[i] + 32;
	}
	for(i=0;i<strlen(MR);i++)
	{
	    if(MR[i]>='a' && MR[i]<='z')
		   H[MR[i]-97]++;
	}
	for(i=0;i<strlen(PG);i++)
	{
       if(PG[i]>='a' && PG[i]<='z') 
		H[PG[i]-97]--;
	}
	for(i=0;i<26;i++)
	{
		if(H[i] == 1)
		{
            flag=1;
			break;
		}
	}
	if(flag ==0 )
	printf("YES");
	else
	printf("NO");
}