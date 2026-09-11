#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int numberOfCourses;

    double totalCredits = 0;
    double totalGradePoints = 0;

    cout << "====================================" << endl;
    cout << "       STUDENT GPA CALCULATOR       " << endl;
    cout << "====================================" << endl;

    cout << "Enter number of courses: ";
    cin >> numberOfCourses;

    string courseName[50];
    double grade[50];
    double creditHours[50];
    double gradePoints[50];

    for (int i = 0; i < numberOfCourses; i++)
    {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter course name: ";
        cin >> courseName[i];

        cout << "Enter grade (0.0 - 4.0): ";
        cin >> grade[i];

        cout << "Enter credit hours: ";
        cin >> creditHours[i];

        gradePoints[i] = grade[i] * creditHours[i];

        totalCredits += creditHours[i];
        totalGradePoints += gradePoints[i];
    }

    double gpa = totalGradePoints / totalCredits;

    cout << "\n\n====================================" << endl;
    cout << "          COURSE DETAILS            " << endl;
    cout << "====================================" << endl;

    cout << fixed << setprecision(2);

    for (int i = 0; i < numberOfCourses; i++)
    {
        cout << "\nCourse: " << courseName[i] << endl;
        cout << "Grade: " << grade[i] << endl;
        cout << "Credit Hours: " << creditHours[i] << endl;
        cout << "Grade Points: " << gradePoints[i] << endl;
    }

    cout << "\n====================================" << endl;
    cout << "             FINAL RESULT           " << endl;
    cout << "====================================" << endl;

    cout << "Total Credit Hours: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Semester GPA: " << gpa << endl;
    cout << "Overall CGPA: " << gpa << endl;

    cout << "====================================" << endl;

    return 0;
}

