#include <iostream>
#include <string>

using namespace std;

// How to solve the problem
// Get input from user
// Calculate average for all users and find what is the best average
// Then print out all students with that average

// Defining structure for student

struct Student {
    int id;
    string name; 
    int grades[2];
};

// Function that will calculate the average when given 2 grades

float calculateAverage(int grade1, int grade2){
    return (float)(grade1 + grade2) / 2;
}

// loops through the student array and calculates the average for that students
// if the students average is higher then the current highest average we set
// the bestAverage to the students average and continue to do this and we have the
// best average

float findBestAverage(Student students[]){
    float bestAverage = 0.0;
    for(int i = 0; i < 3; i++){
        int grade1 = students[i].grades[0];
        int grade2 = students[i].grades[1];
        float average = calculateAverage(grade1, grade2);
        if(average > bestAverage){
            bestAverage = average;
        }
    }
}

// Loop through the students array again and calculates the average for the student
// again but then its compared to the bestAverage parameter and if they are the same
// we cout that x student has achieved the best average. Its importing to do this
// to stop problems with multiple students achieve the best average and only displaying 1
// student and not all.

void findStudents(float bestAverage, Student students[]){
    cout << "The best average was: " << bestAverage << endl;
    cout << "Student(s) who achieved best average: " << endl;
    
    for(int i = 0; i < 3; i++){
        int grade1 = students[i].grades[0];
        int grade2 = students[i].grades[1];
        float average = calculateAverage(grade1, grade2);
        
        if(average == bestAverage){
            cout << students[i].id << ": " << students[i].name << endl;
        }
        
    }
}


// simply loops through the students array and just asking for input

void input(Student students[]){
    for(int i = 0; i < 3; i ++){
        cout << "Student #" << (i + 1) << endl;
        
        cout << "Enter student id: ";
        cin >> students[i].id;
        
        cout << "Enter student name: ";
        cin >> students[i].name;
        
        cout << "Enter students first grade: ";
        cin >> students[i].grades[0];
        
        cout << "Enter students second grade: ";
        cin >> students[i].grades[1];
            
        cout << endl;
    }
}

int main()
{
    // create an array of students
    Student students[3];
    
    // getting input from user for the students
    input(students);
    
    // calculates the best average the students got 
    float bestAverage = findBestAverage(students);
    
    // finding all students with the best average and displaying it
    findStudents(bestAverage, students);
    
    return 0;  
}
