#include "OfferedCourse.h"
#include <iostream>
using std::getline, std::cin, std::cout;

int main() {
		Course myCourse;
		OfferedCourse myOfferedCourse;

		string courseNumber, courseTitle;
		string oCourseNumber, oCourseTitle, instructorName, location, classTime;

		getline(cin, courseNumber);
		getline(cin, courseTitle);

		getline(cin, oCourseNumber);
		getline(cin, oCourseTitle);
		getline(cin, instructorName);
		getline(cin, location);
		getline(cin, classTime);

		cout << "OUTPUT:" << '\n';

		myCourse.SetCourseNumber(courseNumber);
		myCourse.SetCourseTitle(courseTitle);
		myCourse.PrintInfo();

		myOfferedCourse.SetCourseNumber(oCourseNumber);
		myOfferedCourse.SetCourseTitle(oCourseTitle);
		myOfferedCourse.SetInstructorName(instructorName);
		myOfferedCourse.SetLocation(location);
		myOfferedCourse.SetClassTime(classTime);
		myOfferedCourse.PrintInfo();

		cout << "   Instructor Name: " << myOfferedCourse.GetInstructorName() << '\n';
		cout << "   Location: " << myOfferedCourse.GetLocation() << '\n';
		cout << "   Class Time: " << myOfferedCourse.GetClassTime() << '\n';
}