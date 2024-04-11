#include <iostream>
using namespace std;

class test
{
    string str1, str2;
    public:
a    void operator > ()
   {

     if (str1 > str2)
       {
        cout << str1 << " is greater than " << str2 <<" and "<< endl;
        cout << str2 << " is smaller than " << str1 << endl;
       }
       else if (str1 < str2)
         {
            cout << str2 << " is greater than " << str1 <<" and "<< endl;
            cout << str1 << " is smaller than " << str2 << endl;
         }
     else
     {
         cout << str1 << " is equal to " << str2 << endl;
     }
   }
   void getdata()
   {
   cout<<"Enter String 1 "<<endl;
   cin>>str1;

   cout<<"Enter String 2 "<<endl;
   cin>>str2;
   }
};
int main()
{
  test obj;
  obj.getdata();
  >obj;
  return 0;
}
