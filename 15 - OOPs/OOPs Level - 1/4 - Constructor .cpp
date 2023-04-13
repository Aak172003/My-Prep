#include <iostream>
using namespace std;

class Animal {
    public: 
    
    // By deafult ye private hota hai , public lgane se phle 
    int age;
    int weight;
    string name;
    
    // Default Constructor
    Animal() 
    {
        this->age = 0;
        this->weight = 0;
        this->name = "0";
        cout << "Default Constructor called" <<endl;
        
    }
    

    // Parematerised Constructor
    Animal(int age, int weight, string name)
    {
        this->age = age;
        this->weight = weight;
        this->name = name;
        cout<<"Parematerised Constructor called"<<endl;
    }
    

    // Copy Constructor
    Animal(Animal &obj) {
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout<<"I am inside Copy Constructor"<<endl;   
    } 
};


int main()
{
    // Object bnat hi Constructor will automaticall called 
    
    // static Object
    //  Default Constructor
    Animal Dog;        
    
    // Dynamic Object
    // Parameterised Constructor 
    Animal Rabbit(20,25,"Aakash");       
    Animal* Cat = new Animal(20,25,"Aakash");   
    

    // Copy Constructor
    Animal Mouse = Rabbit;
    //    OR
    Animal Kutta(Rabbit);



    return 0;
}
