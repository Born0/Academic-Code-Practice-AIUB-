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
  void printDetail()
  {
    cout<<"Title:"<<title<<endl;
    cout<<"Genre:"<<genre<<endl;
    cout<<"Rating:"<<rating<<endl;
  }
};
main()
{
  string t="title";
  string g="genre";
  int r=rand();
  Movie m(t,g,r);
  m.printDetail();
}
