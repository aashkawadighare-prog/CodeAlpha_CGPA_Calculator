#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "===== CGPA CALCULATOR =====" << endl;
    cout << "Enter number of courses: ";
    cin >> n;

    vector<string> course(n);
    vector<double> grade(n);
    vector<int> credit(n);

    double totalCredits = 0;
    double totalGradePoints = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter course name: ";
        cin >> course[i];

        cout << "Enter grade point: ";
        cin >> grade[i];

        cout << "Enter credit hours: ";
        cin >> credit[i];

        totalCredits += credit[i];
        totalGradePoints += grade[i] * credit[i];
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << "\n===== RESULT =====" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Course: " << course[i]
             << " | Grade: " << grade[i]
             << " | Credits: " << credit[i] << endl;
    }

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;

    cout << fixed << setprecision(2);
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}
