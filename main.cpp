#include <iostream>
using namespace std;

  
int main() {
  /* Declaring Variables*/
  int n, c, remainder, reverse = 0;
  /* Asking the User for a Number*/
  cout<<"Please enter a number to find out whether it is Palindrome: ";
  /* Storing the number*/
  cin >> n;
  /* Declaring the number back to the user*/
  cout <<"The number you have chosen is "<< n<< "\n";
  /* Creating a copy 'c' */
  c = n;
  /* Creating a while loop to divide the Copy number 'c' by 10, taking the remainder to add back on to a new variable called 'reverse'*/
  while (c > 0){
    remainder = c % 10;
    c = c/10;
    /* Creating 'reverse' to compile and store the newly reversed number*/
    reverse = reverse *10 + remainder;
  }
  /* Comparing the original number 'n'to the 'reverse' to determine whether it is palindrome */
  if(n == reverse)
  cout << n <<" is Palindrome";
  else 
  cout<< n << " is not Palindrome";
  
  return 0;
}