#include<iostream>
using namespace std;
class mammal{
    public :
    void Display1()
    {
        cout<<"I am Mammal"<<endl;
    }
};
class marineAnimal{
    public :
    void Display2()
    {
        cout<<"I am a Marine Animal "<<endl;
    }
};
class blueWhale : public mammal , public marineAnimal{
    public :
    void Display3()
    {
        cout<<"I belong to both the categories : Mammals and Marine Animals"<<endl;
    }
};
int main()
{
    blueWhale o3;
    o3.Display1();
    cout<<endl;
    o3.Display2();
    cout<<endl;
}
