#include<iostream>
using namespace std;
class search
{
int a[10],n,search;
public:
void insert_roll()
{

  cout<<"\nenter the no of student present";
  cin>>n;
  cout<<"\nenter the roll_no of student:";
  for( int i=0;i<n;i++)
   {
      cin>>a[i];
   }

}
void display()
{
cout<<"\nthese student are present";
 for( int i=0;i<n;i++)
{
cout<<"\n"<<a[i];
}
}

void find_binary(){
      int first,middle, last;
      cout<<"\nEnter Number to find :";
      cin>>search;
      first=0;
      last=n-1;
      middle=(first+last)/2;
      while(first<=last){

      if(a[middle] < search){
      first=middle+1;
      }

      else if(a[middle]==search)
      {cout<<"\nFound at "<<middle+1<<" location ";
      break;}

      else
      {last=middle-1;}

      middle=(first+last)/2;


      }
      if(first>last)
      cout<<"Not found";

}


void find_linear(){
      int c=0,pos;
      cout<<"\nEnter Number to find :";
            cin>>search;
      for(int i=0; i<n; i++)
            {
                  if(a[i]==search)
                  {
                        c=1;
                        pos=i+1;
                        break;
                  }
            }
            if(c==0)
            {
                  cout<<"\nNot found..!!";
            }
            else
            {
                  cout<<search<<" found at position "<<pos;
            }
}

void find_sentinel()
{
int i=0;
int last;
cout<<"\nenter the number to find:";
cin>>search;
last=a[n-1];
a[n-1]=search;


while(a[i]!=search)
{
i++;
}
a[n-1]=last;
if(i<n-1||search==a[n-1])
{
cout<<"Found : "<<search<<" at position : "<<i+1;
}
else
{
cout<<"!!not found";
}
}
};
int main()
{
search s1;
int ch;
s1.insert_roll();
s1.display();
do{
cout<<"\n\nSearch Using : \n1.Sentinel Serach \n2.Linear Search \n3.Binary Search \n4.Fibinacci Serach \n5.Exit";
cin>>ch;
switch(ch){
case 1: s1.find_sentinel();break;
case 3: s1.find_binary();break;
case 2: s1.find_linear();break;
};

}while(ch!=4);

return 0;
}