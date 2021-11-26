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
			{"#include", "Tells the preprocessor to include these header file in the program"},
			{"+", "Adds together two values"},
			{"-", "Subtracts one value from another"},
			{"*", "Multiplies two values"},
			{"/", "Divides one value by another"},
			{"%", "Returns the division remainder."},
			{"++", "Increases the value of a variable by 1"},
			{"--", "Decreases the value of a variable by 1"},
			{"string&", "Means get the mem address of this variable"},
			{"string*", "Creating a pointer which \"points\" to the mem address of a variable."},
			{".appended", "It is used to concatenate two strings."},
			{".length", "It returns the length of the string."},
			{"/*", "It's a multi-line comment"},
			{"//", "It's a single line comment."},
			{"\\'", "It adds a single quotation mark."},
			{"\\?", "It adds a question mark."},
			{"\\\\", "It adds a backslashspace."},
			{"\\0", "The null character is usually used to terminate a string."},
			{"\\a", "It produces a beep sound."},
			{"\\b", "It adds backspace."},
			{"\\f", "Formfeed character."},
			{"\\n", "Newline character."},
			{"\\nnn", "It represents the value of an octal number."},
			{"\\r", "Carriage return."},
			{"\\t", "Gives tab space."},
			{"\\xhh", "It represents the value of a hexadecimal number."},
			{"bool", "Stores true or false values."},
			{"break", "Used to terminate the loop"},
			{"catch", "Allows to define a block of code to be executed, if an error occurs in the try block"},
			{"char", "Typically a single octet(one byte). It is an integer type"},
			{"cin", "It takes input from the user."},
			{"continue", "Skips the rest of the current iteration of the loop and returns to the starting point of the loop."},
			{"cout", "It prints output on the screen."},
			{"double", "A double-precision floating-point value."},
			{"else", "If the condition is False then this block will get executed."},
			{"float", "A single-precision floating-point value"},
			{"for", "It is used to iterate the statements or a part of the program several times."},
			{"function", "Used to divide an extensive program into smaller pieces."},
			{"if", "Code will get executed if the condition is True."},
			{"int", "The most natural size of integer for the machine."},
			{"iostream", "header file that contains all the functions of program like cout, cin etc."},
			{"recurse", "Recursion is when a function calls a copy of itself to work on a minor problem."},
			{"switch case", "It allows a variable to be tested for equality against a list of values (cases)"},
			{"throw", "Throws an exception when a problem is detected, which lets us create a custom error"},
			{"try", "Allows to define a block of code to be tested for errors while it is being executed"},
			{"using namespace std.", "Use the namespace named std. “std” is an abbreviation for standard"},
			{"void", "Represents the absence of the type"},
			{"while", "It iterates the block of code as long as a specified condition is True"}
		};
		
		// PYTHON Syntaxes and its meaning
		map <string,string> pysyn = {
			{"abs", "Returns the absolute value of a number"},
			{"add", "Adds an element to the set"},
			{"all", "Returns True if all items in an iterable object are true"},
			{"any", "Returns True if any item in an iterable object is true"},
			{"bool", "Returns the boolean value of the specified object"},
			{"capitalize", "Converts the first character to upper case"},
			{"chr", "Returns a character from the specified Unicode code."},
			{"clear", "Removes all the elements from the dictionary, list, and set"},
			{"close", "Closes the file"},
			{"compile"," Returns the specified source as an object, ready to be executed"},
			{"copy", "Returns a copy of the dictionary, list, and set"},
			{"count", "Returns the number of times a specified value occurs in a string, and tuple"},
			{"detach", "Returns the separated raw stream from the buffer"},
			{"dict", "Returns a dictionary (Array)"},
			{"discard", " Remove the specified item"},
			{"encode", "Returns an encoded version of the string"},
			{"enumerate", "Takes a collection (e.g. a tuple) and returns it as an enumerate object"},
			{"val", "Evaluates and executes an expression"},
			{"exec", "Executes the specified code (or object)"},
			{"float", "Returns a floating point number"},
			{"get", "Returns the value of the specified key"},
			{"hash", "Returns the hash value of a specified object"},
			{"help", "Executes the built-in help system"},
			{"index", "Returns the index of the first element with the specified value"},
			{"input", "Allowing user input"},
			{"insert", "Adds an element at the specified position"},
			{"int", "Returns an integer number"},
			{"intersection", "Returns a set, that is the intersection of two or more sets"},
			{"list", "Returns a list"},
			{"pop", "Removes an element from the set"},
			{"print", "Prints to the standard output device"},
			{"remove", "Removes the specified element"},
			{"set", "Returns a new set object"},
			{"sort", "Sorts the list"},
			{"sorted", "Returns a sorted list"},
			{"str", "Returns a string object"},
			{"sum", "Sums the items of an iterator"},
			{"tell", "Returns the current file position"},
			{"title", "Converts the first character of each word to upper case"},
			{"tuple", "Returns a tuple"},
			{"type", "Returns the type of an object"},
			{"update", "Updates the dictionary with the specified key-value pairs"},
			{"values", "Returns a list of all the values in the dictionary"}
		};
		
		// JAVA Syntaxes and its meaning
		map <string,string> javsyn = {
			{"abstract", "Abstract keyword is used to implement the abstraction in java."},
			{"boolean", "Use this data type for simple flags that track true/false conditions."},
			{"break", "Break Statement is a loop control statement that is used to terminate the loop."},
			{"byte", "8-bit signed two's complement integer. Minimum value: -128 & Maximum value: 127"},
			{"catch", "The catch keyword catches exceptions generated by try statements."},
			{"char", "Single 16-bit Unicode character. Minimum value: 0 & maximum value: 65,535"},
			{"class", "Template used to create objects and to define object data types and methods."},
			{"continue", "Skips an iteration of a control statement."},
			{"default", "Specifies some code to run if there is no case match in the switch"},
			{"double", "The double data type is a double-precision 64-bit IEEE 754 floating point."},
			{"do-while loop", "executes a code block once, then a loop will repeat as long as the condition is true"},
			{"enum", "kind of class containing enum constants in its body."},
			{"extends", "you can create new classes that are built upon existing classes."},
			{"finally", "Executes whether exception rise or not and whether exception handled or not"},
			{"float", "single-precision 32-bit IEEE 754 floating point."},
			{"for", "entry-controlled loop that facilitates a user to execute a block of a statement(s) iteratively for a fixed number of times."},
			{"if", "if statement is the most simple decision-making statement."},
			{"if...else", "allows you to execute a block of code only if a certain condition is met."},
			{"implement", "Useful to implement the interfaces in classes."},
			{"int", "32-bit signed 2's complement integer, Minimum value: -2147483648 & Maximum value: 2147483647"},
			{"interfaces", "Completely \"abstract class\" that is used to group related methods with empty bodies"},
			{"long", "Takes 64 bits of memory. Mximum value: 9,223,372,036,854,775,807L. Minimum value: -9,223,372,036,854,775,808L"},
			{"print", "will perform the basic print s"},
			{"println", "will perform the print with a newline"},
			{"private", "Access modifier used for attributes, methods and constructors, making them only accessible within the declared class."},
			{"protected", "Access modifier used for attributes, methods and constructors, making them accessible in the same package and subclasses."},
			{"public", "Declares a member's access as public. Public members are visible to all other classes."},
			{"return", "End method execution and to return a value"},
			{"short", "16-bit signed two's complement integer. Minimum value: -32,768 & Maximum value: 32,767"},
			{"static", "Define the class level members of a class. They are stored in the class memory and you can access them directly through class name."},
			{"string", "An object that represents sequence of char values."},
			{"switch", "A switch statement allows a variable to be tested for equality against a list of values"},
			{"try", "Define a block of code to be tested for errors while it is being executed."},
			{"while", "loops through a block of code as long as a specified condition is true"}
		};
	
	public:
		// Function for choosing programming language
		void langmenu ()
		{
			int lang;

			cout << "1 - C++ Syntax Dictionary\n" << "2 - Python Syntax Dictionary\n" << "3 - Java Syntax Dictionary\n" << "\t0 - Return\n" << "\n Input: ";
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
};

int main ()
{
	// Main Menu
	cout << "D-CS-IT\n" << ""
	
	
	dictionary x;
	x.langmenu();
	
	return 0;
}