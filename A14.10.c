//copy the elements of one array into another array.Take array
//values from the user
#include<stdio.h>
int main()
   { int n;
     printf("Enter size of array\n");
     scanf("%d",&n);
     int a[n],b[n],i;
     printf("Enter array elements\n");
     for(i=1;i<=n;i++)
       scanf("%d",&a[i]);
     printf("copied array\n");
     for(i=1;i<=n;i++)
     {
        b[i]=a[i];
        printf("%d ",b[i]);
     }
     return 0;
    }
