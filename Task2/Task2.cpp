#include <iostream>
#include <string>

class student {
private:
    std::string   Name;
    std::string   Class;
    int           RollNumber; // Changed data type to int
    int          Marks;
public:
    //default constructor
    student() {

    }
    //parametarized constructor
    student(std::string sourceName, std::string sourceClass, int sourceRollNumber, int sourceMarks) :
        Name{ sourceName }, Class{ sourceClass }, RollNumber{ sourceRollNumber }, Marks{ sourceMarks } {

    }
    //destructor
    ~student() {

    }
    //copy Constructor
    student(student& studentSource) {
        Name = studentSource.Name;
        Class = studentSource.Class;
        RollNumber = studentSource.RollNumber;
        Marks = studentSource.Marks;
    }
    //setters
    void setStudentName(std::string sourceName) {
        Name = sourceName;
    }

    void setStudentClass(std::string sourceClass) {
        Class = sourceClass;
    }

    void setStudentRollNumber(int sourceRollNumber) { // Changed parameter type to int
        RollNumber = sourceRollNumber;
    }

    void setStudentMarks(int sourceMarks) {
        Marks = sourceMarks;
    }
    //getters
    std::string getStudentName(void) {
        return Name;
    }

    std::string getStudentClass(void) {
        return Class;
    }

    int getStudentRollNumber(void) { // Changed return type to int
        return RollNumber;
    }

    int getStudentMarks(void) {
        return Marks;
    }
    //diplay info
    void DisplayStudentInfo(void) {
        std::cout << "Student Details:" << std::endl;
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Class: " << Class << std::endl;
        std::cout << "Roll Number: " << RollNumber << std::endl;
        std::cout << "Marks: " << Marks << std::endl;
    }
};
int main(void) {
    student student1{ "Karim", "a", 12, 55 }; // 12 is now treated as an integer
    student1.DisplayStudentInfo();
    return 0;

}
