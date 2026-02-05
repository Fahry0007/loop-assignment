#include<stdio.h>

int main (){

 int i;
char c ='A';
printf("pyramid Limit Enter an Alphabets :");
scanf("%c",&c);


for (i = 'A' ;i <= c ;i++){
 for(int j = 'A';j <=i ;j++){
printf("%c",j);
        }
   printf("\n");
   }

}
