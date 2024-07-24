﻿#include <iostream>
#include <set>
using namespace std;

#define random(a,b) a+rand()%(b+1-a)

class Student {
  string name;
  string surname;
  int age;

public:
  Student(string name, string surname) {
    this->name = name;
    this->surname = surname;
    age = random(20, 45);
  }

  string getName() {
    return name;
  }
  string getSurname() {
    return surname;
  }
  int getAge() {
    return age;
  }

};

ostream& operator << (ostream& os, Student& st) {
  return os << st.getName() << " " << st.getSurname()<<" "<<st.getAge();
}

class Group {
  set<Student*> students;
  string number;
public:
  Group(string number) {
    this->number = number;
  }
  void insert(Student* st) {
    students.insert(st);
  }
  void showStudents() {
    cout << "group: " << number << endl;
    int count = 1;
    for (auto el : students) {
      cout <<count++ <<": " << *el << endl;
    }
  }
};

class Journal {
  set<Group*> groups;
  string number;
public:
  void insert(Group* st) {
    groups.insert(st);
  }
  void showGroups() {
    for (auto el : groups) {
      el->showStudents();
    }
  }
};

int main()
{
  Group* group = new Group("1A");
  group->insert(new Student("Pol", "Polovinov"));
  group->insert(new Student("Pol", "Polovinov"));
  group->insert(new Student("Polw", "Polo"));
  group->insert(new Student("Pole", "Polov"));

  Group* group2 = new Group("1B");
  group2->insert(new Student("Nil", "Polovinov"));
  group2->insert(new Student("Pkllkk", "Polfnov"));
  group2->insert(new Student("Psdfsdf", "Pdflo"));
  group2->insert(new Student("Pdfdfe", "Pdfsfov"));

  Journal journal;
  journal.insert(group);
  journal.insert(group2);

  journal.showGroups();
   
}
