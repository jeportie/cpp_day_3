### Lesson on Inheritance Ambiguity

#### Understanding Inheritance Ambiguity

Inheritance ambiguity occurs in C++ when a class inherits from two or more classes that have a common base class. This is often referred to as the "diamond problem" because of the shape of the inheritance diagram.

**Example of the Diamond Problem:**

```
    A
   / \
  B   C
   \ /
    D
```

In this diagram, class `D` inherits from both `B` and `C`, which in turn inherit from `A`. This can lead to ambiguity because `D` has two copies of `A`'s members.

#### Solving the Diamond Problem with Virtual Inheritance

Virtual inheritance is a technique used to ensure that only one copy of a base class is inherited by the grandchild derived classes. This is done by declaring the inheritance as `virtual`.

**Example:**

```cpp
class A {
public:
    int value;
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
};
```

In this example, `D` will have only one copy of `A`'s members, resolving the ambiguity.
