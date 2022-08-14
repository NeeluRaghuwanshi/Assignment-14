//find the smallest number stored in an array of size 10. Take array
//values from the user.
#include<stdio.h>
int main()
  {
     int a[10],i,sml;
     printf("Enter a number\n");
     for(i=0;i<=9;i++)
     scanf("%d",&a[i]);
     sml=a[0];
     for(i=1;i<=9;i++)
      if(sml>a[i])
         sml=a[i];
      printf("%d is smallest",sml);
      return 0;
  }
