// Overload - + *

#include <iostream>
using namespace std;

class space {
   private:
    int x,y,z;

   public:
   void get(int a, int b, int c);
   void operator -();
   void operator +();
   void operator *();
};
    void space :: get(int a, int b, int c)
    {
       x=a;
       y=b;
       z=c;
    }

    void space :: operator - ()
    {
      cout<<"Substraction="<<(x)-(y)-(z)<<endl;
    }

    void space :: operator + ()
    {
      cout<<"Addition="<<(x)+(y)+(z)<<endl;
    }

    void space :: operator * ()
    {
      cout<<"Multiplication="<<(x)*(y)*(z)<<endl;
    }

int main()
{
    int no1,no2,no3;
    cout<<"Enter your three numbers"<<endl;
    cin>>no1>>no2>>no3;
    space obj;
    obj.get(no1,no2,no3);
    -obj;
    +obj;
    *obj;
    return 0;
}
