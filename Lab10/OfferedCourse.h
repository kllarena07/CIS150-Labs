#pragma once
#include "Course.h"

class OfferedCourse : public Course {
  private:
    string instructorName;
    string location;
    string classTime;

  public:
    void SetInstructorName(string newInstructorName);
    void SetLocation(string newLocation);
    void SetClassTime(string newClassTime);
    string GetInstructorName();
    string GetLocation();
    string GetClassTime();
};