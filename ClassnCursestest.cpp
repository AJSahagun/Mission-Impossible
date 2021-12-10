#include <curses.h>
#include <string>
#include <algorithm>
#include <windows.h>
using namespace std;

class menu
{
	private:
		// Variables for the Main Window
		int yMax, xMax, yMid, xMid;

		
	public:
		// Variables for the Sub Window
		int syMax, sxMax, syMid, sxMid;
		// Function that gets the sizes of a window
		void get_size (WINDOW * win)
		{
			getmaxyx(win, syMax, sxMax);
			syMid = syMax/2;
			sxMid = sxMax/2;
		}

};

int main ()
{
	// Maximize Window
	HWND consoleWindow = GetConsoleWindow();
    ShowWindow(consoleWindow, SW_MAXIMIZE);

	// Initializes Curses
	initscr();
	noecho();
	curs_set(0);
	cbreak();
	
	menu obj;
	obj.get_size(stdscr);
	mvprintw(3, 9,"%d %d", obj.sxMax, obj.sxMid);
	
	// Ends PD Curses
	getch();
	endwin();
	
	return 0;
}