#include <iostream>
#include <iomanip>
using namespace std;

// prototypes
void welcome();
int userNumbers();

// main function
int main() {

  // declare variable
  int largestNum = 0;

  welcome();

  largestNum = userNumbers();

  cout << "The largest number you entered is " << largestNum << endl;
  
  return 0;
} 

// welcome message
void welcome()
{
  cout << "Welcome to my program!\n" << endl;
}

// userInput function to determine largest number
int userNumbers()
{
  // declaring variables
  int userInput, largestNum = 0;
 
  cout << "Enter a positive number and hit enter (0 to quit):" << endl;

  // do-while loop to continue prompting until user enters 0
  do
  {
    
    cin >> userInput;
    if (userInput > largestNum)
    {
      largestNum = userInput;
    }

  }while (userInput != 0);
  

  // message if user enters numbers less than or equal to 0
  if (largestNum <= 0)
  {
    cout << "No positive whole numbers were entered." << endl;
    cin.ignore(100);
  }

  return largestNum;
 
}