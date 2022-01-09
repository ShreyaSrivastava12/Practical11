#include<iostream>
using namespace std;
class a{
      public:
      int a1=100;
      void x()
      {
          int a=2;
      }
 };
class child: public a 
{
      public:
      void y()
      {
          int a=20;
          cout<<a<<endl;
      }
};
int main()
{
    child obj;
    cout<<obj.a1;
}
