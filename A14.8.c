//find second smallest in an array.Take array values from the user.
#include <stdio.h>
int main()
     {
        int a[10],i,j,temp;
        printf("Enter ten numbers\n");
        for (i=0;i<=9;i++)
          scanf("%d", &a[i]);
        for (i=0;i<=9;i++)
        {
            for (j=i+1;j<=9;j++)
            {
                if (a[i]>a[j])
                {
                    temp=a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
            printf("%d is second smallest ", a[1]);

    }

