#include<stdio.h>
#include<stdlib.h>
void addOne(int *p,int *n, int val, int pos)
{ int i;
    printf("========================");
    (*n)++;

    printf("\n gia tri  %d",(*n));
  p=(int*)realloc(p,(*n)*sizeof(int));
  for ( i = (*n); i >=pos; i--)
  {
         
      *(p+i)=*(p+i-1);
       
  }
  *(p+pos)=val;
    for ( i = 0; i < (*n); i++)
    {
         printf("\n in %d la: %d: ",i, *(p+i));

    }

}
int main()
{
    int *p,n,i;
    int pos,val;
    printf("nhap n:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for ( i = 0; i < n; i++)
    {
         printf("nhap %d : ",i);
         scanf("%d",(p+i));
    }
     for ( i = 0; i < n; i++)
    {
         printf("\n in %d la: %d: ",i, *(p+i));

    }
    do
    {
        printf("\n nhap pos:");
        scanf("%d",&pos);
    } while (pos<0 || pos >n);
    printf("\n nhap val: ");
    scanf("%d",&val);
    addOne(p, &n, val, pos);
    free(0);
    return 0;
}
