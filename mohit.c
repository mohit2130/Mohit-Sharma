/* 1.)  Write a program to print sum of the following series:

      1 3 5 7 9 11......

      up to n numbers taking only an integer n as input.*/




#include<stdio.h>
void main()
{
   int i, num, odd_sum = 0;
       printf("Enter the value of num\n");
          scanf("%d", &num);
     for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
     {
           odd_sum = odd_sum + i;
      }
    }
       printf("Sum of all odd numbers  = %d\n", odd_sum);
}
 

