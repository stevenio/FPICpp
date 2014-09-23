#include <iostream>
#include <string>
#include <assert.h>
#include "prelude.h"
using namespace std;
using namespace fcpp;


bool prime(int x) 
{
  if (x<2) return false;
  for(int i = 2; i <= x/2; i++)
     if (x%i == 0 ) return false;
  return true;
}

int main() {
  string str1 = "Go Functional!\n";
  cout << str1; 

  //Go Functional!
  List<int> integers = enumFrom(1);
  assert(take(3,integers)==list_with(1,2,3));

  List<int> evens = filter(even, integers);
  assert(take(3,evens)==list_with(2,4,6));

  List<int> primes = filter(ptr_to_fun(&prime), integers);
  assert(take(3,primes)==list_with(2,3,5));
}
