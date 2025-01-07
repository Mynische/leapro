#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;
    
    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

    Car(std::string make, std::string model, int year, std::string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main()
{
    // constructor = special method that is automatically called when an object is instatiated
    //               useful for assigning values to attributes to arguments

    Student student1("Spongebob", 21, 3.4);
    Student student2("Patrick", 40, 1.5);

    Car car1("Chevy", "Corvette", 2022, "blue");

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';
    
    return 0;
}