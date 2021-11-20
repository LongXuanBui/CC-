#include <iostream>
using namespace std;

const int d= 2*3;
int e;
int b(int a, int c){
    return a*c;
    } ;
int main()
{int a,c;
    cout << "nhap so a:"<< "\n";
    cin >> a;
    cout << "nhap so c:"<< "\n";
    cin >> c;
    cout<< "sau khi nhan la" << b(a,c) << "\n";
    
    
    return 0;
}

