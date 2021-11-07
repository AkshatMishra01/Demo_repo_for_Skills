#include <iostream>
using namespace std;

int search(int arr[],int num, int n)
{
  int i = 0;
  for(i=0;i<n;i++)
  {
    if(arr[i] == num){
      cout<<"The element is present at index"<<i;
    }
  }
}
