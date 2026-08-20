
/*in this the float body written before main */
#include <iostream>

using namespace std;
float square(float x) {
  float result;
  result = x * x;
  return result;
}
int main(void) {
  float arg = 2.0;
  cout << "The second power of " << arg << " is " << square(arg) << endl;
  return 0;
}


/*

// in below code the function is just declared  outside of main and the body is written after main

#include <iostream>

using namespace std;
float square(float);
int main(void) {
  float arg = 2.0;
  cout << "The second power of " << arg << " is " << square(arg) << endl;
  return 0;
}

float square(float x) {
  float result;
  result = x * x;
  return result;
}

*/