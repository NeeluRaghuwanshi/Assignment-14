//find second largest in an array.Take array values from the user.
#include <stdio.h>
int main()
     {
        int a[50],i,n,large=0,s_large=0;
        printf("Enter size of array\n");
        scanf("%d",&n);
        printf("Enter values in array\n");
        for (i=0;i<=n-1;i++)
          scanf("%d",&a[i]);
        large=a[0];
        for (i=1;i<=n-1;i++)
        {
                if (a[i]>large)
                {
                   s_large=large;
                   large=a[i];
                }
                else if(a[i]>s_large)
                {
                    s_large=a[i];
                }

        }
            printf("%d is second largest ",s_large);
            return 0;

    }

