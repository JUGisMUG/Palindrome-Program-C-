#include <iostream>
#include <string>
using namespace std; 

int main() {
  string number, reversed_number = "";
  
  
  cout << "Please enter the number or string you want to validate as a palindrome!" << endl;
  cin >> number; //take input for number or string
  
  for (int i = number.length() - 1; i >= 0; i--) { //for loop to reverse the given input
    reversed_number = reversed_number + number[i]; 
  }
  
  if (reversed_number == number) //checking if reversed number is qual to input number
     cout << "The provided number/string is a palindrome" << endl;
  else 
     cout << "The provided number or string is not a palindrome" << endl;
  
  return 0;
}