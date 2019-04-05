/*2.)  Write the following two sorting functions

   

      1. Fastest sorting algorithm that you know

      2. Second fastest sorting algorithm that you know

 

     compare them by sorting 100000 randomly generated integers in range 1 to 100 & also print the time taken by both of them. */



   #include <stdio.h>
void bubble_sort(int a[], int n) 
{
   int i = 0, j = 0, tmp;
   for (i = 0; i < n; i++) 
{   // loop n times - 1 per element
       for (j = 0; j < n - i - 1; j++) 
{ // last i elements are sorted already            
            if (a[j] > a[j + 1]) 
{  // swop if order is broken
               tmp = a[j];
               a[j] = a[j + 1];
               a[j + 1] = tmp;
           }
       }
   }
}
int main()
 {
 int a[100000], n, i, d, swap;
 printf("Enter number of elements in the array:\n");
 scanf("%d", &n);
 printf("Enter %d integers\n", n);
 for (i = 0; i < n; i++)
   scanf("%d", &a[i]);
    bubble_sort(a, n);
  printf("Printing the sorted array:\n");
  
  for (i = 0; i < n; i++)
    printf("%d\n", a[i]);
 return 0;
}

