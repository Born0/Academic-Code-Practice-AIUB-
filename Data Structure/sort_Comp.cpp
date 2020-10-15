#include <stdio.h>
#include <iostream>
#include <chrono>
#include <unistd.h>
#include <bits/stdc++.h>

using namespace std;

int countSwap=0;
int countT=0;
int countComp=0;
long int timeArr[3];

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
    
    countSwap++;
}

int calculateTime()
{
	auto start = chrono::steady_clock::now();

	
	sleep(3);

	auto end = chrono::steady_clock::now();

    long int ns= chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    
	cout << "Elapsed time in nanoseconds : "
		<< chrono::duration_cast<chrono::nanoseconds>(end - start).count()
		<< " ns" << endl;

	//cout << "Elapsed time in microseconds : "
	//	<< chrono::duration_cast<chrono::microseconds>(end - start).count()
	//	<< " µs" << endl;

	//cout << "Elapsed time in milliseconds : "
	//	<< chrono::duration_cast<chrono::milliseconds>(end - start).count()
	//	<< " ms" << endl;

	//cout << "Elapsed time in seconds : "
	//	<< chrono::duration_cast<chrono::seconds>(end - start).count()
	//	<< " sec";
	
	timeArr[countT]=ns;
	countT++;
   
}

void selectionSort( int arr[],  int n)
{
    int i, j, min_idx;

    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        swap(&arr[min_idx], &arr[i]);
	countComp++;
    }
    
    
}

void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;

       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
            j--;
	    countComp++;
       }
       arr[j+1] = key;
   }
   
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
	countComp++;
     }

     if (swapped == false)
        break;
   }
}

void printArray(int arr[],int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 main(){
     
    //int arr[] = {64, 25, 12, 22, 11};
    //int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Enter array size: ";
    cout<<"\n";
    int n;
    cin>>n;
    cout<<"\n";
    int arr[n];
    cout<<"Enter Data\n";
    int x;
     for(int i=0;i<n;i++){
         cin>>x;
         arr[i]=x;
     }
    cout<<"Given array: \n";
    printArray(arr, n);
    
    int arr1[n];
    int arr2[n];
    int arr3[n];
    
    for(int i=0;i<n;i++){
        arr1[i]=arr[i];
        arr2[i]=arr[i];
        arr3[i]=arr[i];
    }
   
    
    int swapArr[3];
    
    countSwap=0;
    countComp=0;
    selectionSort(arr1, n);
    printf("\n\nSelection sort: \n");
    printArray(arr1, n);
	calculateTime();
	swapArr[0]=countSwap;
	cout<<"Swap Count: "<<countSwap<<'\n';
	cout<<"Compare Count: "<<countComp;
	
	countSwap=0;
	countComp=0;
	insertionSort(arr2, n);
	printf("\n\ninsertionSort: \n");
	printArray(arr2, n);
	calculateTime();
	swapArr[1]=countSwap;
	cout<<"Swap Count: "<<countSwap<<'\n';
	cout<<"Compare Count: "<<countComp;
	
	countSwap=0;
	countComp=0;
	bubbleSort(arr3, n);
    printf("\n\nbubbleSor: \n");
    printArray(arr3, n);
	calculateTime();
	swapArr[2]=countSwap;
	cout<<"Swap Count: "<<countSwap<<'\n';
	cout<<"Compare Count: "<<countComp;
	
	
	
	sort(timeArr,timeArr+3);
	cout<<"\n\nTime compare sort: \n";
	cout<<timeArr[0]<<"\t"<<timeArr[1]<<"\t"<<timeArr[2];
	
	sort(swapArr,swapArr+3);
	cout<<"\n\nSwap compare sort: \n";
	cout<<swapArr[0]<<"\t"<<swapArr[1]<<"\t"<<swapArr[2];
}




