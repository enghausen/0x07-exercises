#include <iostream>
#include "test_util.h"
#include "triangle.h"

using namespace std;

int main(int argc, char* argv[]) {
  cout << "0x07-exercises" << endl;

  // Create instances of the Triangle class and test
  // Here are some tests - uncomment them as you expand your implementation

  Triangle t1 = Triangle(3, 4, 5);
  TestUtil test = TestUtil();

  test.equal("get a", t1.getA(), 3);
  test.equal("area of 3, 4, 5", t1.area(), 6);
  test.equal("circumference of 3, 4, 5", t1.perimeter(), 12);
  test.equal("invariant a > 0", t1.setSides(12, 24, 36), false);

  return 0;
}
