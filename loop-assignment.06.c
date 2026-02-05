#include<stdio.h>

int main () {
int i=0,rows;
printf("how many rows of pyramid : ");
scanf("%d",&rows);
int s = rows-1;

for(i = 1 ;i <=rows * 2; i = i+2){


      for( int k = 0;k < s; k++){


     printf(" ");
      }

     s = s - 1;

 for (int j = 0 ;j < i ;j++ ){
    printf ("*");

}

printf("\n");

}


}




