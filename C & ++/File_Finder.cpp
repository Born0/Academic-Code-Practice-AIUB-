#include <windows.h>
#include <cstring>
#include <iostream>
using namespace std;

int count=0;
void GetFileListing(string directory, string type, bool recursively = true)
{
  int i=0;
  if (recursively)
    GetFileListing(directory, type, false);

  directory += "\\";

  WIN32_FIND_DATA FindFileData;
  HANDLE hFind = INVALID_HANDLE_VALUE;

  string filter = directory + (recursively ? "*" : type);

  hFind = FindFirstFile(filter.c_str(), &FindFileData);

  if (hFind == INVALID_HANDLE_VALUE)
  {
    return;
  }
  else
  {
    if (!recursively)
    {
      directory=directory-'\';
      cout << directory + string(FindFileData.cFileName) << endl;
      directory=directory+'\';
      count++;
    }

    while (FindNextFile(hFind, &FindFileData) != 0)
    {
      if (!recursively)
      {
        cout << directory + string(FindFileData.cFileName) << endl;
          count++;
      }
      else
      {
        if ((FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)>0 && FindFileData.cFileName[0]!='.')
        {
          GetFileListing(directory + string(FindFileData.cFileName), type);
        }
      }
    }

    DWORD dwError = GetLastError();
    FindClose(hFind);
    if (dwError != ERROR_NO_MORE_FILES)
    {
      cout << "FindNextFile error. Error is "<< dwError << endl;
        count++;
    }
  }
}
void ForFile(string fileName)
{
  int i=0;
  char x='E';
  string dir="D:\\";
  while(i<3)
  {
    GetFileListing(dir, fileName);
    dir[0]=x++;
    i++;
  }

  if(count==0)
    cout<<"No file found "<<endl;
  else
    cout<<"Total file found : "<<count<<endl;
}
string input()
{
  string fname,type,fullName;
  cout<<endl<<"Enter file type:";
  cin>>type;
  cout<<endl;
  cout<<"Enter File name:";
  cin>>fname;

  cout<<endl<<endl;
  type="*."+type;
  fullName=fname+type;
  return fullName;
}
int main()
{
  string fullName=input();
  ForFile(fullName);
}
