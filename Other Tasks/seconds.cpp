#include <iostream>
#include <string>

using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void displaySeconds(Time time){
    int hoursToSeconds = time.hours * 3600;
    int minutesToSeconds = time.minutes * 60;
    int seconds = time.seconds;
    
    int totalSeconds = hoursToSeconds + minutesToSeconds + seconds;
    
    cout << endl << "Total seconds: " << totalSeconds;
}

void input(Time &time){
    cout << "Enter hours: ";
    cin >> time.hours;
    
    cout << "Enter minutes: ";
    cin >> time.minutes;
    
    cout << "Enter seconds: ";
    cin >> time.seconds;
}


int main()
{
    Time time;
    input(time);
    displaySeconds(time);
    
    return 0;  
}
