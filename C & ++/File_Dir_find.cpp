#include <windows.h>
#include <cstring>
#include <iostream>
using namespace std;


void FileList(string type)
{
  int i=0,count=0;
  char x='D';
  string dir="C:\\";
  while(i<4)
  {
      HANDLE hFind;
      WIN32_FIND_DATA data;
      string filter=dir+type;
      hFind = FindFirstFile(filter.c_str(), &data);

      if (hFind != INVALID_HANDLE_VALUE)
       {
         do
            {
              cout<<dir<<" "<< data.cFileName<<endl;
              count++;
            }
          while (FindNextFile(hFind, &data));
          FindClose(hFind);
        }
        dir[0]=x++;
        i++;
  }
  if(count==0)
  {
    cout<<"No File Found"<<endl;
  }
}

int main()
{
  FileList("*.mkv");
}
