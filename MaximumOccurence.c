#include<stdio.h>
int main(){
	
    char str[1001];
    int H[255]; 
    int i = 0, max;
    int chars;

  
    gets(str);

    
    for(i=0; i<255; i++)
    {
        H[i] = 0;
    }


    
    i=0;
    while(str[i] != '\0')
    {
        chars = (int)str[i];
        H[chars] += 1;

        i++;
    }


    
    max = 0;
    for(i=0; i<255; i++)
    {
        if(H[i] > H[max])
            max = i;
    }


    printf("%c %d", max, H[max]);

    return 0;
}