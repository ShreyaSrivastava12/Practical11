//Diamond problem
#include<iostream>
using namespace std;
class a{
      public:
      void display()
      {
          cout<<endl;
          cout<<"This the display function of the base class a\n";
      }
};
class b :  public a{
      public:
      void display1()
      {
          cout<<"This the display1 function of the child class b\n";
      }
};
class c : public a{
      public:
      void display2()
      {
          cout<<"This the display2 function of the child class c\n";
      }
};
class d : public b , public c{
      public:
      void display3()
      {
          cout<<"This the display1 function of the child class d\n";
      }
};
int main()
{
     d obj; 

     obj.display(); 
     cout<<endl;

     obj.display1();
     cout<<endl;

     obj.display2();
     cout<<endl;
}
