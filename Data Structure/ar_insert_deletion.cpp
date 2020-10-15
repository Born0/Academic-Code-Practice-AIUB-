#include <iostream>

void insert(int arr[],int count,int newPosition,int newValue){

int i;

for (i=count-1; i>=newPosition; i--) {
  arr[i+1]=arr[i];
}
arr[newPosition]=newValue;
count++;

std::cout << "After insert" << '\n';
  for ( i = 0; i < count; i++) {
    std::cout<< arr[i]<<'\n';
  }
}



void deleteAny(int arr[],int count,int delPosition, int newValue){
  int i;
for ( i = delPosition; i < count; i++) {
  arr[i]=arr[i+1];
}

std::cout << "After insert" << '\n';
  for ( i = 0; i < count; i++) {
    std::cout<< arr[i]<<'\n';
  }

}


int main()
{
  int arr[10] , count;
  std::cout<<"Enter Array size:";
  std::cin>>count;

  std::cout << "Enter elements:" << '\n';
  for (size_t i = 0; i < count; i++) {
    std::cin >> arr[i];
  }

  std::cout << "Entered Array" << '\n';
  for (size_t i = 0; i < count; i++) {
    std::cout<< arr[i]<<'\n';
  }

  std::cout << "Enter the newPosition of new element:" << '\n';
  int newPosition;
  std::cin >> newPosition;

  std::cout << "Enter new value:" << '\n';
  int newValue;
  std::cin >> newValue;

 insert(arr, count,newPosition, newValue);

 std::cout << "Enter delete delete Position" << '\n';
 int delPosition;
 std::cin >> delPosition;
 deleteAny(arr, count,delPosition, newValue);
}
