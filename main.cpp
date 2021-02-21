#include <iostream>
using namespace std;

  
int main() {
// Declaring Variables
  int n, c, remainder, reverse = 0;
// Asking the User for a Number
  cout<<"Please enter a number to find out whether it is Palindrome: ";
// Storing the number
  cin >> n;
// Declaring the number back to the user
  cout <<"The number you have chosen is "<< n<< "\n";
// Creating a copy 'c' to keep for comparison later on in the program
  c = n;
// Creating a while loop to divide the Copy number 'c' by 10, taking the remainder to add back on to a new variable called 'reverse'*/
  while (c > 0){
// Creating 'remainder' to capture the results of the c modulus 10 calc, so tha
    remainder = c % 10;
// Dividing C by 10 to drop the last digit
    c = c/10;
// Creating 'reverse' to compile and store the newly reversed number by first multiplying by 10, to 'push the number up' the places infront of the decimal point, before adding the 'remainder' at each run of the while loop until the c variable becomes empty as it has been reversed into the 'reverse' variable
    reverse = reverse *10 + remainder;
  }
// Comparing the original number 'n' to the 'reverse' to determine whether it is palindrome 
  if(n == reverse)
  cout << n <<" is Palindrome";
  else 
  cout<< n << " is not Palindrome";
  
  return 0;
}
  }
  /* Comparing the original number 'n'to the 'reverse' to determine whether it is palindrome */
  if(n == reverse)
  cout << n <<" is Palindrome";
  else 
  cout<< n << " is not Palindrome";
  
  return 0;
}
