#include <iostream>

// Inline function: A function whose code is expanded at the place where it is called.

using namespace std;
inline int
function (int parameter) {
  return parameter * 2;
}

int main(void) {
  int
  var = 1;
  var = function (var);
  var = function (var);
  var = function (var);
  cout << var << endl;
  return 0;
}