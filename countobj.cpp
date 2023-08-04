#include<iostream>
#include<iomanip>

using namespace std;
class Count
{
   static int count;
   public:
          friend void showcount();
          friend void create();
          Count()
          {
            count++;
          }
          ~Count()
          {
            count--;
          }
  };
  int Count::count;
   void showcount()
   {
     cout<<"Objects in existence: "<<Count::count<<endl;
    }
    
  void create()
  {
    Count temp,temp2;
    showcount();
   }
  
int main()
{
  Count a,b;
  showcount();
  create();
  showcount();
  create();
}
  
  
  
  
