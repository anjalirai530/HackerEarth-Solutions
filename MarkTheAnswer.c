#include<stdio.h>
int main(){
long long N,X,counts=0;


scanf("%ld",&N);
scanf("%ld",&X);
int skip=0;

long long arr[N];
	
	for(int i=0;i<N;i++)
	scanf("%ld",&arr[i]);
	for(int i = 0;i <N;i++)
	{
		
            if(X>=arr[i] && skip<=1){

                 counts++;
        }

       else{

        skip++;
	   }

     
	 }
	printf("%ld",counts);
}