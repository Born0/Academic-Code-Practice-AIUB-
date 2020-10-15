#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;

class Movie
{
  string title;
  string genre;
  int rating;
public:
  Movie(string tt,string gnr ,int rtg)
  {
    title=tt;
    genre=gnr;
    rating=rtg;
  }
void input(string tt,string gnr ,int rtg)
  {
    tt="title";
    gnr="Genre";
    rtg=rand()%11;
  }
  void printDetail()
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
  cout<<"highest rating:"<<h<<endl;
   for(i=0;i<5;i++)
   {
     if(h==x[i])
     {
       s=i+1;
      cout <<"serial:"<<s<<endl;
     }
   }
   for (i = 0; i<5; i++)
    {
     if (x[i]<h)
     {
       h=x[i];
     }
    }
    cout<<"lowest rating:"<<h<<endl;
    for(i=0;i<5;i++)
    {
      if(h==x[i])
      {
        s=i+1;
       cout <<"serial:"<<s<<endl;
      }
    }
}

main()
{
  Movie m[5];
  int i;
  int x[10];
  for ( i = 0; i < 5; i++)
  {
   m[i]=input();

   m[i].printDetail();
  }
}

