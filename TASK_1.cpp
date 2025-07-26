#include <iostream>
using namespace std;

void cgpaCalculator() {
    int n;
    float grade, credit, totalPoints = 0, totalCredits = 0;
    cout << "Enter number of courses: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Enter grade and credit hours for course " << i + 1 << ": ";
        cin >> grade >> credit;
        totalPoints += grade * credit;
        totalCredits += credit;
    }

    float cgpa = totalPoints / totalCredits;
    cout << "\nYour CGPA is: " << cgpa << endl;
}

int main() {
    cgpaCalculator();
    return 0;
}


	

