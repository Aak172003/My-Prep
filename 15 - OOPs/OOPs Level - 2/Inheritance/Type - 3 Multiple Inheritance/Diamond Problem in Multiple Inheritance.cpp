#include <iostream>
using namespace std;

// class A
class A {
    public:
    int chemistry;
    
    A() {
        chemistry = 101;
    }
};

// class b
class B { 
    
    public:
    int chemistry;
    B() {
        chemistry = 201;
    }
};

// classc inherit property of class A and class B
class C : public A , public B {
    public:
    int maths;
    
};

int main()
{
    // Object creation via static  (static me . ka use )
    
    C a1;
    
    a1.maths = 15;
    
    cout<<"The chemistry of A : "<<a1.A::chemistry<<endl;
    cout<<"The chemistry of B : "<<a1.B::chemistry<<endl;
    cout<<"The maths : "<<a1.maths<<endl;
    cout<<endl;
    
    return 0;
}
