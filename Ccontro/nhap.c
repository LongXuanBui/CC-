#include <stdio.h>
int funtion(int *a)
{
(*a)++; 
}
int main()
{
int i=10;
funtion(&i);
printf("gia tri cua i la %d", i);    
    return 0;
}
