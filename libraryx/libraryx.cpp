#include "libraryx.h"

long factorial(long n) { 
  long result = 1; 
  for(int i = 1; i <= n; i++) { 
    result = result * i; 
  } 
  return result; 
}

long addFoo(Foo foo) {
  return foo.a + foo.b;
}
