#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr,n,i;
    printf("nhap so phan tu :");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {   printf("fail!");
        exit(0);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            printf("\n nhap cac phan tu thu %d:",i);
            scanf("%d",(ptr+i));
        }
        for ( i = 0; i < n; i++)
        {
           printf("\n phan tu thu %d la %d",i,*(ptr+i));
        }
        
    }
    free(ptr);
    return 0;
}
