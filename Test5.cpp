#include <iostream>
#include <string>
#include <map>
using namespace std;

// Syntax dictionary class
class dictionary
{
	private:
		// C++ Syntaxes and its meaning
		map <string,string> cppsyn = {
			{"cout", "Display text in stream."},
			{"cin", "Input a user given text."}
		};
		
		// PYTHON Syntaxes and its meaning
		map <string,string> pysyn = {
			{"print", "Display text in stream."},
			{"input", "Input a user given text."}
		};
		
		// JAVA Syntaxes and its meaning
		map <string,string> javsyn = {
			{"print", "The print() method prints the required output on the same line continuously again and again on the screen."},
			{"scanner", "The Scanner class is used to get user input, and it is found in the java.util package."}
		};
	
	public:
		// Function for searching and printing all
		void choice (map <string,string> dict)
		{
			int choice;
			cout << "1 - Display all syntaxes\n" << "2 - Search for a specific syntax\n" << "\n Input: ";
			cin >> choice;
			cout << "\n\n";
	
			switch (choice) {
				case 1:
				{
					cout << "Syntax Dictionary (Alphabetical)\n\n";
		
					for (auto i : dict) {
 					cout << i.first << " = "  << i.second << "\n";
					}
					break;	
				}

				case 2:
				{
					string key;

					cout << "Search for the syntax meaning: ";
					cin >> key;
					cout << key << " = " << dict[key] << endl;
					break;
				}
	
				default:
				{
					cout << "Please enter a valid value between 1 & 2\n\n";
				}
			}
		}
		
		// Function for choosing programming language
		void langmenu ()
		{
			int lang;

			cout << "1 - C++ Syntax Dictionary\n" << "2 - Python Syntax Dictionary\n" << "3 - Java Syntax Dictionary\n" << "\n Input: ";
			cin >> lang;
			cout << "\n\n";

			switch (lang)
			{
				case 1:
				{
					cout << "\nC++ Synthaxes\n\n";
					choice (cppsyn);
					break;
				}

				case 2:
				{
					cout << "\nPython Synthaxes\n\n";
					choice (pysyn);
					break;
				}

				case 3:
				{
					cout << "\nJava Synthaxes\n\n";
					choice (javsyn);
					break;
				}
				
				default:
				{
					
					break;
				}
			
			}
		}
};

int main ()
{
	dictionary x;
	x.langmenu();
	
	return 0;
}