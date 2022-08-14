//find the greatest number stored in an array of size 10. Take array
//values from the user.
#include<stdio.h>
int main()
  {
     int a[10],i,gt;
     printf("Enter 10 numbers\n");
     for(i=0;i<=9;i++)
     scanf("%d",&a[i]);
     gt=a[0];
     for(i=1;i<=9;i++)
      if(gt<a[i])
         gt=a[i];
      printf("%d is greatest",gt);
      return 0;
  }
