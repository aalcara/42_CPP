# study_notes

## Input / Output

<!--TODO ... -->

---

## String methods

For use any function/method of this section, is needed to include string header: `#include <string>`
<!-- TODO... -->

---

## Class Special Members

### Copy constructor

> A copy constructor is a constructor whose first parameter is of type reference to the class itself (possibly const qualified) and which can be invoked with a single argument of this type.

For example, for a class MyClass, the copy constructor may have the following signature:

```C
MyClass::MyClass (const MyClass&);
```

If a class has no custom copy nor move constructors (or assignments) defined, an implicit copy constructor is provided. This copy constructor simply performs a copy of its own members.

An implicit copy constructor is automatically defined. The definition assumed for this function performs a shallow copy, roughly equivalent to:

```C
MyClass::MyClass(const MyClass& x) : a(x.a), b(x.b), c(x.c) {}
```

In many cases this shallow copy suit the needs. By the way, shallow only copy member of classes themselves, and this is probably not what we expect for classes that contains pointers of which its handles its storage.
For that classes, performing a shallow copy means that the pointer value is copied, but not the content itself. This means the copy and original would be sharing the same memory allocation, and at destruction both objects would try to delete the same block of memory.

This can be solved by defining the following custom copy constructor, that creates a deep copy of the object.

```C
class Example5 {
    string* ptr;
  public:
    Example5 (const string& str) : ptr(new string(str)) {}
    ~Example5 () {delete ptr;}
    // copy constructor:
    Example5 (const Example5& x) : ptr(new string(x.content())) {}
    // access content:
    const string& content() const {return *ptr;}
};
```
The deep copy performed by this copy constructor allocates storage for a new string, which is initialized to contain a copy of the original object. In this way, both objects (copy and original) have distinct copies of the content stored in different locations.

- [classes II](https://www.cplusplus.com/doc/tutorial/classes2/)

## References

- [cplusplus](https://www.cplusplus.com/)