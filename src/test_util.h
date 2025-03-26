#ifndef TEST_UTIL_H
#define TEST_UTIL_H

#include <string>

class TestUtil {
  public:
    bool test(std::string description, double expected, double actual); 
    bool test(std::string description, bool expected, bool actual);
};

#endif