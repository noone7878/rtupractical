#include <stdio.h>

int main(void){
    int i, j, rows;
       printf("Enter the number of rows: ");
       scanf("%d", &rows);
       for (i = 1; i <= rows; ++i) {
          for (j = 1; j <= rows; ++j) {
              if (i == 1 || j == 1 || i == rows || j == rows) {
                  printf("* ");
              }else{
                  printf("  ");
              }
          }
          printf("\n");
       }
       return 0;
}
