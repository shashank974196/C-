#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
#define size 5
class stack
{
   int stck[size];
   int tos;
   public: stack()
           {
              tos=-1;
            }
            void push()
            {
               if(tos==size-1)
                {
                  cout<<"Stack full"<<endl;
                  return;
                 }
               int ele;
               cout<<"Enter the element to be pushed"<<endl;
               cin>>ele;
               stck[++tos]=ele;
               cout<<stck[tos]<<" is inserted"<<endl;
             }
             
             void pop()
            {
               if(tos==-1)
                {
                  cout<<"Stack Underflow"<<endl;
                  return;
                 }
               cout<<stck[tos--]<<" is removed"<<endl;
             }
             
             void display()
             {
                for(int i=tos-1;i>=0;i--)                
                {
                  cout<<stck[i]<<setw(8);
                  if(i==0)
                   cout<<endl;
                 }
              }
 };
 
 int main()
 {
    stack s;
    int ch,ele;
    cout<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Push"<<endl<<"3.Display"<<endl<<"4.Push"<<endl;
    while(1)
    {
      cout<<"Enter your choice"<<endl;
      cin>>ch;
      switch(ch)
      {
        case 1: s.push();
                break;
        case 2: s.pop();
                break;
        case 3: s.display();
                break;
        case 4: cout<<"Exit from program"<<endl;
                exit(0);
                break;
        default: cout<<"Wrong choice.Try Again"<<endl;
        }  
     }
    s.push();
    return 0;
  }
