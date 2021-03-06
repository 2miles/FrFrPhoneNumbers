#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

	char letter = 'Z';             //input char.  Z' so that its not '#'
	int num = 99;				   //associated integer 'num' for the input char.
	int digit = 99;				   //corisponding phone button 'digit'
	

							// PROMPT
	cout << "This program converts sequence of chars\n"
		<< "to its corisponding phone button digit.\n\n"
		<< "Press # to quit\n"
		<< "Enter a sequence of letters: \n";
	
	
	while(true){
		
		cin >> letter;
		

		if (letter == '#') {
			return 1;
		}
		//convert ASCII to alphabt nums

		if (letter < 97 && letter >= 65) {
			num = static_cast<int>(letter) - static_cast<int>('A');
		}
		if (letter <= 122 && letter >= 97) {
			num = static_cast<int>(letter) - static_cast<int>('a');
		}


		//if you entered a letter, get the digit
		if (0 <= num && num < 26) {
			digit = (num / 3) + 2;

			if (((num / 3 == 6) || (num / 3 == 7)) && (num % 3 == 0)) {
				digit = digit - 1;
			}
			if (digit > 9) {
				digit = 9;
			}
		}
		
				//OUTPUT RESULTS
		cout << digit;
		
	}
	cout << endl;

	system("PAUSE");
	return 0;
}
