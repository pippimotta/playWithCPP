#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
  int A[5];
  A[0]=12;
  A[1]=15;
  A[2]=25;
  
  //cout <<sizeof(A)<<endl; //20 cuz it is initialized for 5
  //cout << A[1]<<endl; //15
  //printf("%d\n", A[2]);
  for (int x: A) {
    cout << x <<endl;//now we can see the garbage!!
  }
  return 0;
}
