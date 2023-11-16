#include<iostream>
using namespace std;

class A
{
  int a;
  friend voud modify(A obj);
  public:A()
         {
            a=5;
         }
         void get()
         {
           cout<<a<<endl;
         }
};

void modify(A obj)
{
  obj.a+=13;
}

int main()
{
  A obj;
  obj.get();
  modify(obj);
  obj.get();
  return 0;
}