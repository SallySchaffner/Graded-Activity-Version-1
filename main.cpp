// This program demonstrates the GradedActivity and Final Exam classes.
#include <iostream>
#include <iomanip>
#include "GradedActivity.h"
#include "FinalExam.h"
using namespace std;

int main()
{
	// From Pr15-1.cpp demonstrates the (base) GradedActivity class.
    double testScore;  // To hold a test score

    // Create a GradedActivity object for the test.
    GradedActivity test;

    // Get a numeric test score from the user.
    cout << "Enter your numeric test score: ";
    cin >> testScore;

    // Store the numeric score in the test object.
    test.setScore(testScore);

    // Display the letter grade for the test.
    cout << "The grade for that test is "
        << test.getLetterGrade() << endl;

	// From Pr15-2.cpp demonstrates the (derived) FinalExam class.

    int questions; // Number of questions on the exam
    int missed;    // Number of questions missed by the student

    // Get the number of questions on the final exam.
    cout << "How many questions are on the final exam? ";
    cin >> questions;

    // Get the number of questions the student missed.
    cout << "How many questions did the student miss? ";
    cin >> missed;

    // Define a FinalExam object and initialize it with
    // the values entered.
    FinalExam testFinal(questions, missed);

    // Display the test results.
    cout << setprecision(2);
    cout << "\nEach question counts " << testFinal.getPointsEach() << " points.\n";
    cout << "The exam score is " << testFinal.getScore() << endl;
    cout << "The exam grade is " << testFinal.getLetterGrade() << endl;

    return 0;
}