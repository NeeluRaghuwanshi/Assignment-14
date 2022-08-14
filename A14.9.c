//read n number of values in an array and display it in reverse
//order. Take array values from the user
#include<stdio.h>
int main()
   { int n;
     printf("Enter size of array\n");
     scanf("%d",&n);
     int a[n],i;
     printf("Enter array elements\n");
     for(i=1;i<=n;i++)
       scanf("%d",&a[i]);
     printf("Array elements in reverse order are:\n");
     for(i=n;i>=1;i--)
        printf("%d ",a[i]);
     return 0;
    }
