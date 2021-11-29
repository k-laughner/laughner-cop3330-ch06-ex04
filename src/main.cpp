/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Kaylee Laughner
 */
#include "main.h"
// creating specified data type
class Name_value {
  public: 
    string name;
    double value;
    Name_value(string n,double v):name(n), value(v) {}
};
// class for printing
class print {
  // function to print resulting vector
  public: void printVector(vector<Name_value> v) {
    std::cout << "\nThe resulting vector is: \n";
    for (int i = 0; i<v.size(); i++) {
      std:cout << v[i].name << " " << v[i].value << "\n";
    }
  }
};
int main() {
  string name;
  double value;
  vector<Name_value> v;
  std::cout << "Enter names and an associated value separated by a space: \nTo quit inputting enter NoName 0 as input.\n";
  // get input and add it to array until user types "NoName 0"
  do {
    std::cin >> name >> value;
    if (name != "NoName") {
      v.push_back(Name_value(name, value));
    }
  } while (name != "NoName");

  // print the resulting vector
  print p;
  p.printVector(v);
} 
