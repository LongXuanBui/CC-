#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    int i;
    printf("nhap cac pt :");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    // for ( i = 0; i < n; i++)
    // {
    //     printf("nhap phan tu thu %d: ",i);
    //     scanf("%d",(ptr+i));

    // }
      for ( i = 0; i < n; i++)
    {
        printf("\n in phan tu thu %d la %d",i, *(ptr+i));


    }
    free(ptr);
    return 0;
}
