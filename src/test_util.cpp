#include "test_util.h"
#include <iostream>

bool TestUtil::test(std::string description, double expected, double actual) {
  bool result = expected == actual;
  std::cout << (result ? "PASS " : "FAIL ") << description << std::endl;
  if(!result) {
    std::cout << "     expected " << expected << "  actual " << actual << std::endl << std::endl;
  }
  return expected == actual;  
}

bool TestUtil::test(std::string description, bool expected, bool actual) {
  bool result = expected == actual;
  std::cout << (result ? "PASS " : "FAIL ") << description << std::endl;
  if(!result) {
    std::cout << "     expected " << expected << "  actual " << actual << std::endl << std::endl;
  }
  return expected == actual;  
}