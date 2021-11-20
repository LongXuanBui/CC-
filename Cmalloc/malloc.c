#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
// tencontro = (kieudulieu*)malloc(soLuongONho * sizeof(kieudulieu) )
    p = (int*) malloc(5*sizeof(int));
    int i;
    for (i=0;i<5; i++)
    {   printf("nhap pt ");
        scanf ("%d",(p+i));

    }
    for(i=0;i<5;i++)
    {
        printf("%d",*(p+i));

    }

    return 0;
}
