int main() {

    int i = 0;

    char A[100];

    scanf("%s",A);

 

    int l = strlen(A) - 1;

 

    while(i <= l){

        if(A[i] == A[l]) {

            i++;

           l--; 

        }

        else {

            printf("NO");

            return 0;

        }

    }

   printf("YES");

   

}