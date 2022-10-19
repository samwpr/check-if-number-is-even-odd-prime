#include <iostream>
#include "Ex1.h"
using namespace std;


// Main method is kept clean to readability 
int main()
{
	int option;
	cout << "To check for one number press '1'. To check for a range of numbers press '2': ";
	cin >> option;
	menu(option);
	return 0;
}

void menu(int option)
{
	int input, input2;
	if (option == 1)
		{	
		cout << "Please enter a positive integer: ";
		cin >> input;
		cout << " " << endl;
		cout << "Number: " << input << endl;
			// Calling functions instead of repeating code 
		oddOrEven(input); 
		checkForPrime(input);
		} else
		cout << "Please enter the number you would like your range to start at: ";
		cin >> input;
		cout << "Please enter the number you would like to end at: ";
		cin >> input2;
		cout << "Your range is from " << input << " to " << input2 << "\n" << endl;
		checkRange(input, input2);
}

void oddOrEven(int input)
{
	if (input % 2 == 0) //If there is no remainder number is even else it is odd 
	{
		cout << "Odd/Even: EVEN" << endl;
	} else 
		cout << "Odd/Even: ODD" << endl;
}


void checkForPrime(int input)
{
	int i;
	bool is_prime = true; 

	
	// Checking for edge cases. 0 is neither prime nor composite. 1 is not a prime number 	as a prime needs to be divided exactly by two numbers. 1 and itself but 1 is not able to fulfil this condition 
	if (input == 0 || input == 1) {
    is_prime = false;
  }

	
  // loop to check if n is prime
	// i start from 2 as it has already been checked for prime above.
  for (i = 2; i <= input/2; ++i) { 
    if (input % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << "Prime: YES \n" << "__________\n" << endl;
  else
    cout << "Prime: NO \n" << "__________ \n" << endl;
}


void checkRange(int input, int input2)
{
	for(int i = input; i <= input2; i++)
		{
			cout << "Number: " << i << endl;
			oddOrEven(i);
			checkForPrime(i);
		}
}

