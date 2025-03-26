#include <iostream>
#include "test_util.h"

using namespace std;

int main(int argc, char* argv[]) {
  cout << "0x07-exercises" << endl;

  // Triangle t1 = Triangle(3, 4, 5)
  TestUtil().test("This is a test", 0, 1);
  TestUtil().test("This is another test", 1, 1);

  return 0;
}
