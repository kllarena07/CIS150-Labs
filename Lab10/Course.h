#pragma once

#include <string>
using std::string;

class Course {
  private:
    string courseNumber;
    string courseTitle;

  public:
    void SetCourseNumber(string newCourseNumber);
    void SetCourseTitle(string newCourseTitle);
    string GetCourseNumber();
    string GetCourseTitle();
    void PrintInfo();
};