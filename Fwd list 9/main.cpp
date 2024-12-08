#include "Tests/1BasicConstructorsTest.h"
#include "Tests/2PushFrontTest.h"
#include "Tests/3PopFrontTest.h"
#include "Tests/4DestructorCallTest.h"
#include "Tests/5CopyConstructorTest.h"
#include "Tests/6AssignmentOperatorTest.h"
#include "Tests/7DestructorWithAssignmentTest.h"
#include "Tests/8EmplaceFrontTest.h"
//#include "Tests/9FrontTest.h"
#include "Tests/9FrontTest.h"
//#include "Tests/10ClearTest.h"
//#include "Tests/11BasicIteratorTest.h"
//#include "Tests/12ConstIteratorTest.h"
//#include "Tests/13MemberAccessIteratorTest.h"
//#include "Tests/14InitializerListConstructorTest.h"
//#include "Tests/15IteratorConstructibleTest.h"
//#include "Tests/16ClassWithNoDefaultConstructorTest.h"
//#include "Tests/17InsertTest.h"
//#include "Tests/18EraseTest.h"
//#include "Tests/19StlCompatibilityTest.h"
#include <iostream>
#include <optional>
int main() 
{
  std::optional<std::string> msg; // just to make sure this works - click "Run".
  msg = "All tests passed";
  std::cout << *msg;
  return 0;
}