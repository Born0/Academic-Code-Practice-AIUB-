#include <iostream>
#include <windows.h>
#include <stdlib.h>  																	
#include <conio.h>

using namespace std;

int typeWait = 50;


DWORD WINAPI typingThread(LPVOID lpParameter)
{
        char *msg = (char *)lpParameter;
        int i;
        for(i=0; msg[i]!='\0'; i++)
        {
            cout << msg[i];
            cout.flush();
            Sleep(typeWait);
        }
        return 0;
}

HANDLE typeMessage(string &msg, HANDLE h)
{
    if(h!=0)
        WaitForSingleObject(h, INFINITE);
    LPVOID lpString = (LPVOID)msg.c_str();
    HANDLE myHandle = CreateThread(0, 0, typingThread, lpString, 0, 0);
    return myHandle;
}

int main()
{

    int C = 523;
    int _C = 554;
    int D = 587;
    int _D = 622;
    int E = 659;
    int F = 698;
    int _F = 740;
    int G = 784;
    int _G = 831;
    int A = 880;
    int _A = 932;
    int B = 988;


    string s = "Happy Birthday to you...\n";
    HANDLE h = typeMessage(s, 0);

    Beep(C, 282);
    Beep(C, 282);
    Beep(D, 400);
    Beep(C, 382);
    Beep(F, 500);
    Beep(E, 400);


    s = "Happy Birthday to you...\n";
    h = typeMessage(s, h);

    Beep(C, 282);
    Beep(C, 282);
    Beep(D, 400);
    Beep(C, 382);
    Beep(G, 500);
    Beep(F, 600);

    s = "Happy Birthday to dear "NAME" \n";   //"NAME"= write someones name without quotation
    h = typeMessage(s, h);

    Beep(C, 282);
    Beep(C, 282);
    Beep(_C, 350);
    Beep(A, 302);
    Beep(F, 400);
    Beep(E, 400);
    Beep(D, 500);

    s = "Happy Birthday to you...\n";
    h = typeMessage(s, h);

    Beep(_A, 340);
    Beep(_A, 220);
    Beep(A, 220);
    Beep(F, 228);
    Beep(G, 286);
    Beep(F, 270);

    s = "\nPress any key to exit...";
    h = typeMessage(s, h);

    getch();

    return 0;
}
