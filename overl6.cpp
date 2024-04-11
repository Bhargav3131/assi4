// Overloading * for cube

#include <iostream>
using namespace std;

class Count {
   private:
    int x;

   public:
    void getdata()
    {
        cout<<"Enter a number: "<<endl;
        cin>>x;
    }

    void operator * ()
    {
        x = x*x*x;
    }

    void display()
    {
        cout << "Cube of the number is: " << x << endl;
    }
};

int main() {
    Count obj;
    obj.getdata();
    *obj;
    obj.display();
    return 0;
}
