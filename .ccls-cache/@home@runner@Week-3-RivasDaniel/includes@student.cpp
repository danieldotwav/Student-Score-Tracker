#include "student.h"

// Inititalize ID
int Student::ID = 100;

// Function Definitions
void Student::setName(string first, string last){
  firstName = first;
  lastName = last;
}

void Student::updateName(){
  string f, l;
  // User Prompt
  cout << "Enter first name for student " << studentID << ": ";
  cin >> f;
  cout << "Enter last name for student " << studentID << ": ";
  cin >> l;
  // Update first and last name in setName
  setName(f, l);
}

void Student::setScores(){
  for(int i = 0; i < NBR_SCORES; i++){
    cout << "Enter score " << i + 1 << " for student " << studentID << ": " << firstName << " " << lastName << endl;
    cin >> scores[i];
  }
}

void Student::showScores(){
  int sum = 0;
  
  cout << "Scores for student " << studentID << ": "<< firstName << " " << lastName << " are\n";
  for(int i = 0; i < NBR_SCORES; i++){
    cout << scores[i] << " ";
    sum += scores[i];
  }
  cout << "\nThe average is: " << (sum / NBR_SCORES) << endl;
}
 
Student::Student(string fName, string lName){
  ID++;
  studentID = ID;
  setName(fName, lName);
}

