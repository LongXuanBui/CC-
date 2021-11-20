#include <iostream>
using namespace std;
int main()
{
int n,i;
cout<< "nhap so luong" << endl;
cin >> n;
int *p;
p = new int[n];
for ( i = 0; i < n; i++)
{
    cout << "nhap cac pha thu thu " << i << ":"<< endl;
    cin >> *(p+i);

}
for ( i = 0; i < n; i++)
{
    cout << "in cac pha thu thu" << i << ":" << *(p+i)<< endl;   
}
delete [] p;
    return 0;
}
