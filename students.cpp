#include <iostream>
#include <string>

using namespace std;

struct Student {
    int id;
    string name; 
    int grades[2];
};

float calculateAverage(int grade1, int grade2){
    return (float)(grade1 + grade2) / 2;
}

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

void findStudents(float bestAverage, Student students[]){
    for(int i = 0; i < 3; i++){
        int grade1 = students[i].grades[0];
        int grade2 = students[i].grades[1];
        float average = calculateAverage(grade1, grade2);
        
        if(average == bestAverage){
            cout << "Student ahs";
        }
        
    }
}


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
    Student students[3];
    input(students);
    float bestAverage = findBestAverage(students);
    findStudents(bestAverage, students);
    
    return 0;  
}
