#include<stdio.h>
int main(){
    int N = 0;
    scanf("%d", &N);
	long arr[N];
	  int sum=0;
      for(int i=0;i<N;i++)
       {
	     scanf("%ld",&arr[i]);
       }
      
	  if(arr[N-1]%10==0)
	  printf("Yes");
	  else
	  printf("No");
}
