// Overload -

#include <iostream>
using namespace std;

class Count {
   private:
    int x;

   public:
    void getdata()
    {
        cout<<"Enter a value for x: "<<endl;
        cin>>x;
    }

    void operator - ()
    {
        x = -x;
    }

    void display()
    {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    Count obj;
    obj.getdata();
    -obj;
    obj.display();
    return 0;
}
