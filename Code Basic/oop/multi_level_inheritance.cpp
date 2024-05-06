// A class can also be derived from one class, which is already derived from another class.

// In the following example, MyGrandChild is derived from class MyChild (which is derived from MyClass).

#include <bits/stdc++.h>
using namespace std;
// Base class (parent)
class MyClass {
public:
  void myFunction() {
    cout << "Some content in parent class." ;
  }
};

// Derived class (child)
class MyChild: public MyClass {
public:
  void myChildFunction() {
    cout << "derived in MyChild";
  }
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
public:
  void myGrandChildFunction() {
    cout << "derived in MyGrandChild";
  }
};

int main() {
  MyGrandChild myObj;
  myObj.myGrandChildFunction();
  return 0;
}