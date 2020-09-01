#include<stdio.h>
int main(){
	char str[10],sum=0,i;
	gets(str);
	for( i=0;i<8;i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			if(str[i+1]>='0' && str[i+1]<='9')
			{
				sum = str[i] + str [i+1] - 96;
				 if((sum%2)!=0) 
                 { 
                     printf("invalid"); 
                       break; 
                  } 
			}
		}
       
else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y') 
 { 
  printf("invalid"); 
    break; 
 } 
	}
	if(i==8)
	  printf("valid");
}