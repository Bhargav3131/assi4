// Overload --

#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:
    void getvalue()
    {
        cout<<"Enter a value: "<<endl;
        cin>>value;
    }

    void operator -- ()
    {
        --value;
    }

    void display()
    {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count obj;
    obj.getvalue();
    --obj;
    obj.display();
    return 0;
}
