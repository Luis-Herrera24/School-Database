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
    void deleteStudent(const string& iD){
        auto it = studentBD.find(iD);
        if (it!= studentBD.end()){
            studentBD.erase(it);
            cout << "Student with ID " << iD << " was successfully delete" << endl;
        }
        else {
            cout << "Student with ID: " << iD << " was not found" << endl;
        }
    }
    void deleteCourse(const string& iD){
        auto it = courseBD.find(iD);
        if (it!= courseBD.end()){
            courseBD.erase(it);
            cout << "Course with ID " << iD << " was successfully delete" << endl;
        }
        else {
            cout << "Course with ID: " << iD << " was not found" << endl;
        }
    }
    void updateTeacher (const string& iD, const string& newTeacher){
        auto it = courseBD.find(iD);
        if(it != courseBD.end()){
            it -> second.courseTeacher = newTeacher;
            cout << "Teacher for course ID: " << iD << " has been updated" << endl;
        }
        else{
            cout << "Course ID: " << iD << " was not found" << endl;
        }
    }
    void updateCourseName(const string& iD, const string& newCourseName){
        auto courseIteration = courseBD.find(iD);
        if (courseIteration != courseBD.end()){
            courseIteration -> second.courseName = newCourseName;
            cout << "Name of Course ID: " << iD << " was updated to " << newCourseName << endl;
        }
        else {
            cout << "Course ID: " << iD << " was not found" << endl;
        }
    }
    void updateStudentName(const string& iD, const string& newStudentName){
        auto studentIteration = studentBD.find(iD);
        if(studentIteration != studentBD.end()){
            studentIteration -> second.studentName = newStudentName;
            cout << "Student with ID: " << iD << " name was updated to " << newStudentName << endl;
        }
        else {
            cout << "Student ID: " << iD << " was not found" << endl;
        }
    }
    void updateStudentLevel(const string& iD, const string& newStudentLevel){
        auto studentIteration = studentBD.find(iD);
        if(studentIteration != studentBD.end()){
            studentIteration -> second.studentLevel = newStudentLevel;
            cout << "Student with ID: " << iD << " school level was updated to " << newStudentLevel << endl;
        }
        else
            cout << "Student ID: " << iD << " was not found" << endl;
    }
    void deleteAllCourses(){
        courseBD.clear();
        cout << "All courses have been deleted" << endl;
    }
    
    void deleteAllStudents(){
        studentBD.clear();
        cout << "All students have been deleted" << endl;
    }
};

int main(){
  
    Database newData;
    
    newData.addStudent("101", Student("Luis Herrera", "Senior"));

    newData.addCourse("COMP 1333.012",Course("Into To Computer Science", "D. Frank"));
    
    newData.displayAllStudents();
    newData.displayAllCourses();
    
    newData.updateTeacher("COMP 1333.012", "L. Herrera");
    newData.updateCourseName("COMP 1333.012", "Into To Thug-o-nomics");
    newData.displayAllCourses();
    
    newData.updateStudentName("101", "Abel Herrera");
    newData.updateStudentLevel("101", "Freshman");
    newData.displayAllStudents();
    
    newData.deleteStudent("101");
    newData.deleteCourse("COMP 1333.012");
    
    newData.displayAllStudents();
    newData.displayAllCourses();
    
  
  
  /*
   Course newCourse("Into To Computer Science", "COMP 1333.012");
   Student* newStudent = new Student ("Luis Herrera", "Senior");
   newCourse.displayCourseInfo();
  newStudent -> displayStudentInfo();
  
  delete newStudent;
  newStudent = nullptr;
*/
    return 0;
}
