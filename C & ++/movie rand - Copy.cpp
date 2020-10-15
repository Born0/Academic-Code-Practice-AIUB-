#include<iostream>
#include<cstdlib>
using namespace std;

class Movie
{
  string title;
  string genre;
  int rating;
public:
  Movies(string tt,string gnr ,int rtg)
  {
    title=tt;
    genre=gnr;
    rating=rtg;
  }
  void printDetail()
  {
    cout<<"Title:"<<title<<endl;
    cout<<"Genre:"<<genre<<endl;
    cout<<"Rating:"<<rating<<endl;
  }
};
main()
{
  Movie m;

/*  string  t='name';
  string  g='genre';*/
  int  r=rand();
  m.Movies("t","g",5);
   m.printDetail();
}
