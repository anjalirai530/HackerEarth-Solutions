#include<stdio.h>
void Rotate(int A[],int left,int right)
{

while(left<right)
{
    int temp = A[left];
	A[left] = A[right];
	A[right] = temp;
	left++;
	right--;
}
}
int main(){

int n,d;
scanf("%d",&n);
scanf("%d",&d);
int arr[n];
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
Rotate(arr,0,d-1);
Rotate(arr,d,n-1);
Rotate(arr,0,n-1);
for(int i=0;i<n;i++)
{
	printf("%d ",arr[i]);
}

}