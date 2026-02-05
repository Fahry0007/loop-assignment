#include <stdio.h>


int main (){
int c,b,a;

printf("pyramid Limit :");
scanf("%d",&a);

for (c=a;c>=1;c--){
    for (b=c;b>=1;b--){
        printf("*");
      }
        printf("\n");
   }
}
