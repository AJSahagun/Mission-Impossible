#include <curses.h>
#include <string>
#include <algorithm>
#include <windows.h>
using namespace std;

int main ()
{
	// Maximize Window
	HWND consoleWindow = GetConsoleWindow(); // This gets the value Windows uses to identify your output window 
    ShowWindow(consoleWindow, SW_MAXIMIZE); // this mimics clicking on its' maximize button

	// Initializes Curses
	initscr();
	noecho(); // No keyboard echo
	curs_set(0); // No cursor
	cbreak(); // crtl+C exit
	
	// Init Var 
	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax); // get max stdscr size
	
	/* MAIN WINDOW */
	WINDOW * wMain = newwin(yMax-2, xMax-4, 1, 2); // initializes Main Win
	box(wMain, 0, 0); // border
	keypad(wMain, true); // keyboard input on

	// Get the Mid Values of the window
	int wyMid = (yMax-3)/3;
	int wxMid = (xMax-6)/2;

	// LOGO
	mvwprintw(wMain, wyMid-3, wxMid-30," ______              ______   ______        _____  _________");
	mvwprintw(wMain, wyMid-2, wxMid-30,"|_   _ `.          .' ___  |.' ____ \\      |_   _||  _   _  |");
	mvwprintw(wMain, wyMid-1, wxMid-30,"  | | `. \\ ______ / .'   \\_|| (___ \\_|______ | |  |_/ | | \\_|");
	mvwprintw(wMain, wyMid, wxMid-30,"  | |  | ||______|| |        _.____`.|______|| |      | |");
	mvwprintw(wMain, wyMid+1, wxMid-30," _| |_.' /        \\ `.___.'\\| \\____) |      _| |_    _| |_");
	mvwprintw(wMain, wyMid+2, wxMid-30,"|______.'          `.____ .' \\______.'     |_____|  |_____|");
	mvwprintw(wMain, wyMid+3, wxMid-12,"Dictionary for CS and IT");
	
	refresh ();
	wrefresh(wMain);

	// Initializes Vars
	string choices [] = {"Start", "About"};
	int elem = sizeof(choices)/sizeof(*choices); // Get Num of elements
	int choice, highlight = 0;
	int elem1 = choices[0].size()/2; // Gets the mid size of a particular element
	
	/* MENU WINDOW */
	WINDOW * wMenu = subwin(wMain, 8, 40, wyMid*2, wxMid-20); // init Menu Win
	box(wMenu, 0, 0); // border
	
	// get sub win max size
	int syMax, sxMax;
	getmaxyx(wMenu, syMax, sxMax);
	
	// get mid of sub win
	int swyMid = syMax/2;
	int swxMid = sxMax/2;
	
	// choice printer
	while (choice != 10) { // exits if enter key pressed (ascii enter val = 10)
		for (int i = 0; i < elem; i++) {
			if (i == highlight) {
				wattron(wMenu, A_REVERSE);
			}
			mvwprintw(wMenu, 1+i, swxMid-(choices[i].size()/2), choices[i].c_str());
			wattroff(wMenu, A_REVERSE);
		}
		touchwin(wMenu);
		choice = wgetch(wMenu); // keyboard input
	
	// choice highlighter
		switch(choice) {
			case KEY_UP:
				highlight--;
				if(highlight < 0) {
					highlight = 0;
				}
				break;
			case KEY_DOWN:
				highlight++;
				if (highlight > 1) {
					highlight = 1;
				}
				break;
			default:
				break;
		}
	}
	
	// converts string into array element num
	auto itr = find(choices, choices + elem, choices[highlight]);
	
	// choice branch
	switch (distance(choices, itr)) {
		case 0:
			mvwprintw(wMain, 3, 9,"%d", elem1);
			wgetch(wMain);
			break;
		case 1:
			break;
	}
	
	//mvwprintw(wMain, 3, 9,"%d", elem1);
	//wgetch(wMain);
	
	// Ends PD Curses
	getch();
	endwin();

	return 0;
}
