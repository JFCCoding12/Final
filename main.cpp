#include <stdio.h>
#include <iostream>
#include <time.h>
#include "headers/timer.h"
#include "headers/ColorConsole.h"
#include "headers/Movinglogic.h"
#include "headers/game.h"




using namespace std;
void devmode();
void setscreensize(){
#if defined(_WIN32)
{
  HWND console = GetConsoleWindow();
  RECT r;
  GetWindowRect(console, &r); //stores the console's current dimensions

  //MoveWindow(window_handle, x, y, width, height, redraw_window);
  MoveWindow(console, r.left, r.top, 800, 600, TRUE);
  for (int j = 0; j < 100; ++j)
    {
      for (int i = 0x41; i < 0x5B; ++i)
        cout << (char)i;
    }
  cout << endl;
  Sleep(1000);
  MoveWindow(console, r.left, r.top, r.right - r.left, r.bottom - r.top, TRUE);
}

#elif defined(__APPLE__)
string screen50x800 = "\e[8;35;150t";
cout << screen50x800;
#endif


}
int main(){
	clearscreen();
	setscreensize();
	int option;
	cout << GREEN << "                                                      ____                                                                  " << endl;
	cout << GREEN<< "      .'. .`.             .'.       | |..          | |                   `````|````` |`````````,       .'.       | |        " << endl;
	cout << GREEN<< "    .'   `   `.         .''```.     | |  ``..      | |______                  |      |'''|'''''      .''```.     | |        " << endl;
	cout << GREEN<< "  .'           `.     .'       `.   | |      ``..  | |                        |      |    `.       .'       `.   | |        " << endl;
	cout << GREEN<< ".'               `. .'           `. | |          ``| |___________             |      |      `.   .'           `. | |_______ " << endl;
	cout << GREEN<< "                                                                                                                            " << endl;
	cout << RED << "________________________________________________________@@@__________________________________________________________________" << endl;
	cout << RED << "|                                                                                                                           |" << endl;
	cout << "|                                                                                                                           |" << endl;
	cout << "|                                                                                                                           |" << endl;
	cout << "|         1) Run The Trail                                                                                                  |" << endl;
	cout << "|          2) Highscores                                                                                                    |" << endl;
	cout << "|           3) Credits                                                                                                      |" << endl;
	cout << "|            4) Quit                                                                                                        |" << endl;
	cout << "|                                                                                                                           |" << endl;
	cout << RED << "|________________________________________________________@@@________________________________________________________________|" << endl;
	cout << YELLOW << "Start Your Adventure: ";
	cout << RESET;
	cin >> option;
	cout << endl;
	while(!cin) //check input
		{
		    cout << "That wasn't and option!: ";
		    cin.clear();
		    cin.ignore();
		    main();
		}
	switch(option){
	case 1:
		clearscreen();
		newgame();
		break;
	case 2:
	//	highscores();
		break;
	case 3:
	//	credits();
		break;
	case 4:
		return 0;
		break;
	case 5:
		cout << "Dev mode:\n";
		devmode();
			break;
	default:
		cout << "I don't know that command!: ";
		cin >> option;
		break;
	}

	return 0;

}



void devmode(){
	string ch = " ";
	clearscreen();
	cout << "---Dev Mode---\n";
	cout << endl;
	cout << endl;
	cout << "type the function to test with out the (): ";
	cin >> ch;

	if(ch == "play"){
		play();

	}else if(ch == "main"){
		main();

		}

	else if(ch == "newgame"){
	 newgame();

	}
	else if ( ch == "getnames"){
		 getnames();
		 x++;
	}
		 else if ( ch == "pickdate"){
			 pickDate();
	}else {
		cout << "unknown function\n";
		devmode();
	}
}


