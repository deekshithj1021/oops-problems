#include<iostream>
using namespace std;

class A
{
  int a;
  int b;
  public:A(int x, int y):a(x)
         {
	   b=y;
         }
	 void out() const
	 {
	   cout<<a<<b<<endl;
	 }
	 void set(int x, int y) const
	 {
	   a=x;
	   b=y;
	 }
};


int main()
{
  const A obj(2,4);
  obj.set(1,5);
  obj.out();
  return 0;
}