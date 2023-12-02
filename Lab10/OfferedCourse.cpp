#include "OfferedCourse.h"

void OfferedCourse::SetInstructorName(string newInstructorName) {
  instructorName = newInstructorName;
}
void OfferedCourse::SetLocation(string newLocation) {
  location = newLocation;
}
void OfferedCourse::SetClassTime(string newClassTime) {
  classTime = newClassTime;
}
string OfferedCourse::GetInstructorName() {
  return instructorName;
}
string OfferedCourse::GetLocation() {
  return location;
}
string OfferedCourse::GetClassTime() {
  return classTime;
}