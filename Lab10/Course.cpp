#include <iostream>
#include <string>
#include "Course.h"
using std::string, std::cout;

void Course::SetCourseNumber(string newCourseNumber) {
  courseNumber = newCourseNumber;
};

void Course::SetCourseTitle(string newCourseTitle) {
  courseTitle = newCourseTitle;
};

string Course::GetCourseNumber() {
  return courseNumber;
};

string Course::GetCourseTitle() {
  return courseTitle;
};

void Course::PrintInfo() {
  cout << "Course Information:" << '\n';
  cout << "   Course Number: " << courseNumber << '\n';
  cout << "   Course Title: " << courseTitle << '\n';
};