#include <windows.h>
#include <cstring>
#include <iostream>
using namespace std;

//////////////////////////
// This program does not read your 'C' drive, there's lots of files so it takes too long.
// If you want to add 'C' Drive then go to LINE:71 [string startingDir="D:\\";],change [D->C]
// If you have more than 4 drives go to LINE:69 [int totalDir=4; ], change [4->numberOfTotalDriveYouHave]
/////////////////////////
// MD. SIRAJUDDIN BORNO  AIUB#18-36449-1
////////////////////////
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
      cout << directory + string(FindFileData.cFileName) << endl;
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
  int totalDir=4;       // Total Directory on your desktop [here 4: D,E,F,G]
  char x='E';
  string startingDir="D:\\";
  while(i<totalDir)
  {
    GetFileListing(startingDir, fileName);
    startingDir[0]=x++;
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
  cout<<"Enter file type:";
  cin>>type;
  cout<<endl<<"Enter File name:";
  cin>>fname;
  cout<<endl;
  type="*."+type;
  fullName=fname+type;
  return fullName;
}
int main()
{
  string fullName=input();
  ForFile(fullName);
}
