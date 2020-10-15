#include<iostream>
//#include<cstring>
//#include<cstdlib>
using namespace std;

class Movie
{
  string title;
  string genre;
  int rating;
public:
  Movie(string t,string g ,int r)
  {
    title=t;
    genre=g;
    rating=r;
  }
  void getValues()
  {
    cout<<"Title:"<<title<<endl;
    cout<<"Genre:"<<genre<<endl;
    cout<<"Rating:"<<rating<<endl;
  }
};

void highestLowest(int x[])
{
  int s,h,i;
  h=x[0];
  for (i = 0; i<5; i++)
   {
    if (x[i]>h)
    {
      h=x[i];
    }
   }
  cout<<"Highest Rating:"<<h<<endl;
   for(i=0;i<5;i++)
   {
     if(h==x[i])
     {
       s=i+1;
      cout <<"Serial:"<<s<<endl;
     }
   }
   for (i = 0; i<5; i++)
    {
     if (x[i]<h)
     {
       h=x[i];
     }
    }
    cout<<"Lowest Rating:"<<h<<endl;
    for(i=0;i<5;i++)
    {
      if(h==x[i])
      {
        s=i+1;
       cout <<"Serial:"<<s<<endl;
      }
    }
}

main()
{
  string t="Title";
  string g="Genre";
  int r[5];
  int i;
  for(i=0;i<5;i++)
  {
    r[i]=rand()%11;
    cout<<"serial:"<<i+1<<endl;
    Movie m(t,g,r[i]);
    m.getValues();
    cout<<endl<<endl;
  }
highestLowest(r);
}
