#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    int n,i, pos, val;
    printf("nhap so luong pt: ");
    scanf("%d", &n);
    p=(int*)malloc(n*sizeof(int));
    for ( i = 0; i < n; i++)
    {
       printf("\n nhap %d : ", i);
       scanf("%d",(p+i));
    }
    for ( i = 0; i < n; i++)
    {
        printf("\n xuat %d la %d",i,*(p+i));
    }
    printf("\n nhap gia tri muon chen: ");
    scanf("%d",&val);
    do
    {
    printf("\n nhap vi tri muon chen : ");
    scanf("%d",&pos);
    } while (pos>n || pos <0);
    
    return 0;
}
