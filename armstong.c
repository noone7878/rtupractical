#include <stdio.h>


int main()

    {
       int n, a, b, c, d, _1st, _2nd, _3rd;

       printf("Enter a three digit number-\t");
       scanf("%d", &n);

       a = n%10;
       b = n/10;
       c = b%10;
       d = b/10;

       _1st = a*a*a;
       _2nd = c*c*c;
       _3rd = d*d*d;
       if(_1st+_2nd+_3rd == n)
       {
            printf("\n %d is an armstrong number.", n);
       }
       else
       {
            printf("\n %d is not an armstrong number.", n);
       }
       return(0);


    }
