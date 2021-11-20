#include <stdio.h>
#include <stdlib.h>
void hieusau();

int main()
{
 khoitao();
//  hieusau();
      return 0;
}
void khoitao()
{
   int value=5;;
    // int *p;
    // value =5;
    // p= &value;
    // printf ("%d",*p);
  
    int  *a;//void *a=null;
    a=&value;// cach kho tao nay tương duong vs "int *p=&value"
    printf("gia tri con tro la %d",a);
    printf("\n gia tri cua bien con tro tro toi la:%d", *a);
}
void hieusau()
{
    int value =10;
    int *p=NULL;

    // in ra gia tri con tro
    printf("\n gt con tro 'p' la:%d",p);
    // in ra di chi con tro
    printf("\n dia chi con tro 'p' la: %d",&p);
    // gia tri cua bien
    // printf("\n gia tri cua bien ma con tro dang tro toi la %d",*p);
    //////
printf("\n-------------------");
    int *q;
    q=&value;
     printf("\n gt con tro 'q' la:%d",q);
    // in ra di chi con tro
    printf("\n dia chi con tro 'q' la: %d",&q);
    // gia tri cua bien
    printf("\n gia tri cua bien ma con tro 'q' dang tro toi la %d",*q);
    // thay doi gia tri cua value theo con tro
    *q=100;
    printf("\n gia tri cua bien ma con tro 'q' dang tro toi la %d",*q);

}