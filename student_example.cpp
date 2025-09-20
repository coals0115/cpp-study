#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    double gpa;

public:
    Student(const std::string& n, int a, double g) 
        : name(n), age(a), gpa(g) {}
    
    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "GPA: " << gpa << std::endl;
    }
    
    void setGPA(double newGPA) {
        if (newGPA >= 0.0 && newGPA <= 4.0) {
            gpa = newGPA;
        }
    }
    
    double getGPA() const {
        return gpa;
    }
};

int main() {
    Student student1("김철수", 20, 3.5);
    student1.displayInfo();
    
    student1.setGPA(3.8);
    std::cout << "Updated GPA: " << student1.getGPA() << std::endl;
    
    return 0;
}