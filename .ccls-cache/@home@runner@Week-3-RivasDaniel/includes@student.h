#include <iostream>
using namespace std;

class Student{
  public:
    static const int NBR_SCORES = 4;
    void setName(string first, string last);
    void updateName();
    void setScores();
    void showScores();
    Student(string = "", string = "");// constructor with parameters

  private:
    string firstName;
    string lastName;
    int scores[NBR_SCORES];
    int studentID;
    static int ID; // private static variable

};

