
#include <iostream>
using namespace std;

class Human {
    public:
    virtual void speak() {
        cout<<"The human is speaking"<<endl;
    }
  
};

class Dog : public Human {
    public:
    void speak()
    {
        cout<<"The dog is barking "<<endl;
    }
    
};


int main()
{
    Dog d1;
    d1.speak();
    
    // Dynamically created object   
    // (all member function as well as data member is accessed by -> operator )
    
    Human* h1 = new Human();
    h1->speak();
    // this will print "The human is speaking"
    
    Human* d2 = new Dog(); 
    d2->speak();
    // this will print " The dog is barking "
    // only if , hum Parent class ke member ko virtual krde
    
    /*
    Dog* dog1 = new Human();
    dog1.speak();

    This will give error sometimes , 
    actually iska answer kuch compiler support krte hai or kuch nhi 
    */
   
    // But if we want answer -> type casting krdo 
        
    Dog* dog1 = (Dog* )new Human();
    dog1->speak();

    return 0;
}
