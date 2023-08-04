#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class student
{
   
   int marks[3];
   public: float avg;
           string name,usn;
           void read()
           {
             cout<<"Enter the USN"<<endl;
             getline(cin>>ws,usn);
             cout<<"Enter the name"<<endl;
             getline(cin>>ws,name);
             cout<<"Enter the marks of 3 subjects"<<endl;
             for(int i=0;i<3;i++)
               cin>>marks[i];
            }
           void average()
           {
             int lowest=0;
             for(int i=0;i<3;i++)
             {
               if(lowest<marks[i])
               {
                lowest=marks[i];
               }
               avg+=marks[i];
               }
             avg-=lowest;  
             avg/=2;
           }
           void display()
           {
             cout<<"Name:"<<name<<endl<<"USN:"<<usn<<endl;
             cout<<"Marks: ";
             for(int i=0;i<3;i++)
               cout<<marks[i]<<setw(5);
             cout<<endl<<"Average:"<<avg<<endl;
            }
  };
  
  
int main()
{
  int n;
  cout<<"Enter the number of students"<<endl;
  cin>>n;
  student s[n];
  for(int i=0;i<n;i++)
  {
    s[i].read();
    s[i].average();
  }
  int t,aver; 
  for(int i=0;i<n;i++)
  {
    if(aver<s[i].avg)
    {
      aver=s[i].avg;
      t=i;
    }
  }
  cout<<"The topper is: "<<s[t].name<<" and USN is "<<s[t].usn<<" and average is "<<aver;
}
  
  
  
  
