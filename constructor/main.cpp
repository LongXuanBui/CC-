#include <iostream>
#include <string>
using namespace std;
int BienX;
//

class LopHocLapTrinh
{
    private:
        string name;
    public:// chung
        void setName(string tenGi)
        {
            name= tenGi;
        }
        string getName()
        {
            return name + "rat de hieu";
        }

};
//
int main()
{
    LopHocLapTrinh a;
   a.setName("Lop hoc lap trinh");
   cout << a.getName()<< endl;

    return 0;
}
