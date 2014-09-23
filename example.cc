#include <iostream>
#include <assert.h>
#include "prelude.h"

using namespace fcpp;
using namespace std;

int main( ) 
{
int x=1, y=2, z=3;
List<int> li = cons(x,cons(y,cons(z,NIL)));

// head also removes the 1st element from the list
assert( head(li) == 1 );

// tail returns whatever is left of in the list, and list_with is
// used to define small sized list
assert( tail(li) == list_with(2,3) );

 while( li ) {
      std::cout << li.head() << " ";
      li = li.tail();
 }
return 0;
}
