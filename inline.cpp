#include<iostream>
using namespace std;

inline float largest(float a, float b , float c=54.6)
{
   return (a>b && a>c)? a : ( b>c ? b : c);
  }
int main()
{
   cout<<"Largest is "<<largest(34.8,100,89)<<endl;
return 0;
}
