//
//  main.cpp
//  School Database
//
//  Created by Luis Herrera on 9/20/24.
//

//
//  main.cpp
//  Student Database
//
//  Created by Luis Herrera on 9/20/24.
//

#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Course{
public:
    //Attributes
    string courseName;
    string courseTeacher;
    
    // Constructor
    Course() {}
    Course(string name, string teacher){
        courseName = name;
        courseTeacher = teacher;
    }
    
    // Method
    void displayCourseInfo() const{
        cout << " Course: " << courseName << ", Teacher: " << courseTeacher;
    }
};

class Student{
public:
    string studentName;
    string studentLevel;
    
    Student() {}
    Student (string name, string level) {
        studentName = name;
        studentLevel = level;
    }
    
    void displayStudentInfo() const {
        cout << "Student: " << studentName << " Grade: " << studentLevel;
    }
};

class Database{
private:
    map <string, Course> courseBD;
    map <string, Student> studentBD;
    
public:
    
    void addCourse(string iD, const Course& course){
        courseBD[iD] = course;
    }
    void addStudent(string iD, const Student& student){
        studentBD[iD] = student;
    }
    
    void displayAllStudents(){
        for(auto& pair : studentBD){
            pair.second.displayStudentInfo();
            cout << " ID: " << pair.first << endl;
        }
            
    }
    void displayAllCourses(){
        for(auto& pair : courseBD){
            cout << "ID: " << pair.first;
            pair.second.displayCourseInfo();
            cout << endl;
        }
    }
    
};

int main(){
  
    Database newData;
    
    newData.addStudent("101", Student("Luis Herrera", "Senior"));
  //Course newCourse("Into To Computer Science", "COMP 1333.012");
    newData.addCourse("COMP 1333.012",Course("Into To Computer Science", "D. Frank"));
    
    newData.displayAllStudents();
    newData.displayAllCourses();
  //Student* newStudent = new Student ("Luis Herrera", "Senior");
  
  /*newCourse.displayCourseInfo();
  newStudent -> displayStudentInfo();
  
  delete newStudent;
  newStudent = nullptr;
*/
    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Course{
public:
    //Attributes
    string courseName;
    string courseID;
    
    // Constructor
    Course() {}
    Course(string name, string iD){
        courseName = name;
        courseID = iD;
    }
    
    // Method
    void displayCourseInfo() const{
        cout << "Course: " << courseName << ", ID: " << courseID  << endl;
    }
};

class Student{
public:
    string studentName;
    string studentLevel;
    
    Student() {}
    Student (string name, string level) {
        studentName = name;
        studentLevel = level;
    }
    
    void displayStudentInfo () {
        cout << "Student: " << studentName << " Grade: " << studentLevel<< endl;
    }
};

class Database{
private:
    map <string, Course> courseBD;
    map <string, Student> studentBD;
    
public:
    
    void addCourse(string iD, const Course& course){
        courseBD[iD] = course;
    }
    void addStudent(string iD, const Student& student){
        studentBD[iD] = student;
    }
    
};

int main(){
  
  Course newCourse("Into To Computer Science", "COMP 1333.012");
  Student* newStudent = new Student ("Luis Herrera", "Senior");
  
  newCourse.displayCourseInfo();
  newStudent -> displayStudentInfo();
  
  delete newStudent;
  newStudent = nullptr;

    return 0;
}
