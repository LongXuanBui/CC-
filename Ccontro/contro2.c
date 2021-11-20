#include <stdio.h>
#include <stdlib.h>
void printaddress()
{
     int a[]={1,2,3,4,5};
    printf("%d",sizeof(a));
    for(int i=0; i< (sizeof(a)/sizeof(int)); i++)
    {
        printf("\n dia chi cua phan tu thu %d la: %d",i,&a[i]);
    }
    printf("\n ----------------------------------");
    int *p=&a[0];
    printf("\ngia tri con tro 'p' la : %d", p);
    printf("\ngia tri bien ma con tro p tro den la %d",*p);
    p++;
     printf("\ngia tri con tro 'p' la : %d", p);
    printf("\ngia tri bien ma con tro p tro den la %d",*p);
    

    

}

int main()
{
    printaddress();
    return 0;
}

