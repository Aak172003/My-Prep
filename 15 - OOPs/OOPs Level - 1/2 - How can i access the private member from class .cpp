// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Animal {
    // Private Modifier 
    private:
    int weight;

    // Public Modifier 
    public:
    // State or Properties 
    int age ;
    string name;
    
    // Behaviour or Functions 
    
    // Getter and Setter Function is used to access 
    // the Private member from calss to outside the class

    // Getter Return tha Data 
    int getWeight()
    {
        return weight;
    }
    
    // Setter set the value to weight

    // ************************************************************************************************************************************************

    /*

    Error
    void setWeight(int weight)  // means weight me hi weightdaal rhe hai 
    {
        weight = weight;
    }
    
    */
   
    // ************************************************************************************************************************************************

    
    // Ok 
    void setWeight(int w) 
    {
        weight = w;
    }

    // Better way , which is also make differentiable 

    void setWeight(int weight)
    {
        this->weight = weight;
        // Here this->weight point to private weight Member, jisse hum main se aane wala parameter 
        // hum private weightko dena chahte hai 
    }
    
};

int main() {
    // How Object is Created 
    
    // Statically Create Object 
    Animal Dog;
    Dog.age = 20;
    Dog.name = "Fluppy";
    cout<<"The age of Animal : "<<Dog.age<<endl;
    cout<<"The age of Animal : "<<Dog.name<<endl;

    // How Access Private Member from class
    Dog.setWeight(101);
    cout<<"The Weight is "<<Dog.getWeight()<<endl;


    return 0;
}