# School Database Project

## Project Description
This project is a basic school database system built using C++. It manages students and courses using a simple in-memory database structure backed by C++ maps. The database allows you to add, update, delete, and display student and course information. The project showcases fundamental C++ concepts, including classes, encapsulation, and data manipulation using standard template libraries (STL).

## Features
- **Add Students**: Add new students to the database, specifying their name and grade level.
- **Add Courses**: Add courses to the database with the course name and assigned teacher.
- **Update Information**: Modify existing student names, grade levels, and course information such as the teacher or course name.
- **Delete Records**: Remove individual students or courses from the database or delete all records at once.
- **Display Data**: View all students and courses currently stored in the database.

## Classes and Structure
1. **Course Class**:
    - Stores course name and course teacher.
    - Methods to display and modify course details.

2. **Student Class**:
    - Stores student name and grade level.
    - Methods to display and modify student details.

3. **Database Class**:
    - Manages the storage and manipulation of `Student` and `Course` objects.
    - Allows adding, updating, deleting, and displaying data.

## Code Snippets

### Adding a Student
``cpp
newData.addStudent("101", Student("Luis Herrera", "Senior"));  
``
### Updating a Teacher
``cpp
newData.updateTeacher("COMP 1333.012", "L. Herrera");
``
### Deleting a Course
``cpp
newData.deleteCourse("COMP 1333.012");
``
## How to Compile and Run

1. **Clone or download the project files** to your local machine.

2. **Compile the code**:
   If you have `g++` installed, you can compile using the following command:
   ```bash
   g++ main.cpp -o schoolDatabase
3. **Run the executable**
   ```bash
   ./schoolDatabase

