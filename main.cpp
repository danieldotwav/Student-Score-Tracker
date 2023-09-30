#include <iostream>
#include "includes/student.h"
using namespace std;

const int AP_STUDENTS = 2;
const int NBR_STUDENTS = 3;

int main() {
  Student students_ap[AP_STUDENTS] = {Student("Mike", "Miller"),
                                      Student("Linda", "Lawson")};
  Student students[NBR_STUDENTS];

  cout << "Enter scores for AP students\n";
  for(int i = 0; i < AP_STUDENTS; i++){
    students_ap[i].setScores();
  }

  cout << "Show scores for AP students\n";
  for(int i = 0; i < AP_STUDENTS; i++){
    students_ap[i].showScores();
  }

  cout << "Enter names for non-AP students\n";
  for(int i = 0; i < NBR_STUDENTS; i++){
    students[i].updateName();
  }

  cout << "Enter scores for non-AP students\n";
  for(int i = 0; i < NBR_STUDENTS; i++){
    students[i].setScores();
  }

  cout << "Show scores for non-AP students\n";
  for(int i = 0; i < NBR_STUDENTS; i++){
    students[i].showScores();
  }

  cout << "\nGoodbye\n";
  return 0;
}
