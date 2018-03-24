#include <iostream>
#include "headers/game.h"
#include "headers/ColorConsole.h"
#include <string>
#include <fstream>
#include <cctype>

using namespace std;



void clearscreen(){
#if defined(_WIN32)
  system("CLS");
#elif defined(__linux__)
  system("CLS");
#elif defined(__APPLE__)
		system("clear");
#endif
}
void start();
void getnames();
void checkNames();
void pickDate();

void newgame(){
	ofstream outData;
	outData.open("playerstats.TMT");
	int option = 0;
	cout << RED << "________________________________________________________@@@___________________________________________________________________" << endl;
	cout << RED << "|  "<< GREEN <<"  Many People make the trip up north.    "<< RED <<"                                                                                 |" << endl;
	cout << RED <<        "|                                                                                                                            |" << endl;
	cout << RED <<        "|     "<< GREEN <<"   You may be                           "<< RED <<"                                                                               |" << endl;
	cout << RED <<       "|     "<< GREEN <<"    1) Mass Business man on Vacation  "<< RED <<"                                                                                 |" << endl;
	cout << RED <<        "|     "<< GREEN <<"     2) Mainah heading to The County    "<< RED <<"                                                                               |" << endl;
	cout << RED <<        "|      "<< GREEN <<"     3) Canadian coming back from Old Orchard Beach "<< RED <<"                                                                  |" << endl;
	cout << RED <<        "|       "<< GREEN <<"     4) Difference between them             "<< RED <<"                                                                         |" << endl;
	cout << RED <<       "|                                                                                                                            |" << endl;
	cout << RED << "|________________________________________________________@@@_________________________________________________________________|" << endl;
	cout << YELLOW << "Who do you want to be?: ";
	cin >> option;
	cout << RESET;
	while(!cin) //make sure user gives a number not a string or char!
	{
	    cout << RED << "That wasn't and option!: " << YELLOW;
	    cin.clear();
	    cin.ignore();
	    cin >> option;
	}
	switch(option){
	case 1:
			outData << "Mass " << 20000;
			outData.close();
			getnames();
			break;
	case 2:

			outData << "Maine " << 10000;
			outData.close();
			getnames();
			break;
	case 3:
			outData << "Canadian " << 15000;
			outData.close();
			getnames();
			break;
	case 4:
		// add later
		cout << "";
		break;

	default:
		clearscreen();
		newgame();
	}
}
void getnames(){
	int i = 1;
	ofstream outData;
	outData.open("playernames.TMT");
	clearscreen();
	do{
		clearscreen();
		string option = " ";
		cout << RED << "________________________________________________________@@@____________________________________________________________________" << endl;
		cout << RED << "|                                                                                                                             |" << endl;
		cout <<        "|                                                                                                                             |" << endl;
		cout <<        "|   "<< BLUE <<  "                           #####      "<< RED <<  "                                                                                    |" << endl;
		cout <<        "|   "<< BLUE <<  "                          #### _\_               "<< RED <<  "                                                                          | " << endl;
		cout <<        "|   "<< BLUE <<  "                         ##=-[.].]   :::          "<< RED <<  "                                                                        |" << endl;
		cout <<        "|   "<< BLUE <<  "                          #(    _\   `'_:         "<< RED <<  "                                                                         |" << endl;
		cout <<        "|   "<< BLUE <<  "                           #  \__|    | |           "<< RED <<  "                                                                       |" << endl;
		cout <<        "|   "<< BLUE <<  "                            \___/     | |           "<< RED <<  "                                                                       |" << endl;
		cout <<        "|   "<< BLUE <<  "                           .'   `-----' |             "<< RED <<  "                                                                    |" << endl;
		cout <<        "|   "<< BLUE <<  "                         ( )     ,------'             "<< RED <<  "                                                                    |" << endl;
		cout <<        "|   "<< BLUE <<  "                         | |     |         _     _     "<< RED <<  "                                                                   |" << endl;
		cout <<        "|   "<< BLUE <<  "                         | |     |        ((_____))    "<< RED <<  "                                                                   |" << endl;
		cout <<        "|   "<< BLUE <<  "                         | |     |         [o   o]     "<< RED <<  "                                                                   |" << endl;
		cout <<        "|   "<< BLUE <<  "                         |_|==o=={        / \\   /     "<< RED <<  "                                                                    |" << endl;
		cout <<        "|   "<< BLUE <<  "                         :..     |       /  (o o)       "<< RED <<  "                                                                  |" << endl;
		cout <<        "|   "<< BLUE <<  "            .------------'''  Y---------'     U         "<< RED <<  "                                                                  |" << endl;
		cout <<        "|   "<< BLUE <<  "           |               |  |              /          "<< RED <<  "                                                                  |" << endl;
		cout <<        "|    "<< BLUE <<  "         |                |  |             |            "<< RED <<  "                                                                 |" << endl;
		cout <<        "|    "<< BLUE <<  "       :|                }  )            |            "<< RED <<  "                                                                   |" << endl;
		cout <<        "| "<< BLUE <<  "         : |       _        |  |           |               "<< RED <<  "                                                                 |" << endl;
		cout <<        "| "<< BLUE <<  "        :  |      / \       |__|_          |               "<< RED <<  "                                                                  |" << endl;
		cout <<        "| "<< BLUE <<  "       :   |     /   \      [____)         |               "<< RED <<  "                                                                  |" << endl;
		cout <<        "|  "<< BLUE <<  "    :     |   /\___/\______________\   |  |               "<< RED <<  "                                                                    |" << endl;
		cout <<        "| "<< BLUE <<  "     #      |  /  uuu                 |  |  |               "<< RED <<  "                                                                |" << endl;
		cout <<        "|  "<< BLUE <<  "           | |   | |                |  |  |                "<< RED <<  "                                                                |" << endl;
		cout <<        "|  "<< BLUE <<  "            | |   | |                 | || |               "<< RED <<  "                                                                |" << endl;
		cout <<        "|  "<< BLUE <<  "             | |   | |                 | || |              "<< RED <<  "                                                                |" << endl;
		cout <<        "|  "<< BLUE <<  "               |\\   |\\\                 |\\|\\           "<< RED <<  "                                                                     |" << endl;
		cout <<        "|_____________________________________________________________________________________________________________________________|" << endl;
		cout <<        "|  " << GREEN << "What's the number "<< i <<" players name?     " << RED << "                                                                                     |" << endl;
		cout << RED << "|________________________________________________________@@@__________________________________________________________________|" << endl;
		cout << RESET;
		cout << YELLOW << "Player " << i <<" Name: " << RESET;
		cin >> option;
		outData << i << " - "<<" " << option << endl;
		i++;
	}while(i<=3);
	outData.close();
	checkNames();
}
void checkNames(){
	clearscreen();
	char option;
	fstream inData;
	string num, name;
		inData.open("playernames.TMT",  ios::in);
		cout << RED << "_______________________________________________________@@@___________________________________________________________________" << endl;
	    char c;
	    while (inData >> num >> c >> name && c == '-')
	        cout <<"                            "<< GREEN << num << " " << name << RED << "\n";
		inData.close();
		cout << RED << "_______________________________________________________@@@____________________________________________________________________" << endl;
		cout << YELLOW << "Are you sure you want these names?(Y/N): ";
		cin >> option;
		cout << RESET;
		while(!cin) //make sure user gives a number not a string or char!
			{
			    cout << RED << "Just type Y or N: "<< YELLOW;
			    cin.clear();
			    cin.ignore();
			    cin >> option;
			}
		option = toupper(option);
	if(option == 'N' || option == 'Y'){ //lets make sure they are giving Y or a N
		switch(option){
		case 'Y':
			pickDate();
			break;
		case 'N':
			getnames();
			break;
		default:
			checkNames();
			break;
		}
	} else {
		 cout << "Just type Y or N: ";
					    cin.clear();
					    cin.ignore();
					    checkNames();
	}
}
void pickDate(){
	clearscreen();
	int option = 0;
		cout << RED << "________________________________________________________@@@___________________________________________________________________" << endl;
		cout << RED << "|  "<< GREEN <<"  What Month do you want to start in?    "<< RED <<"                                                                                 |" << endl;
		cout << RED << "|                                                                                                                            |" << endl;

		cout << RED << "|     "<< CYAN <<"Choosing the right time of year can make a big difference "<< RED <<"                                                             |" << endl;
		cout << RED << "|     "<< CYAN <<"         on how hard of a journey it will be "<< RED <<"                                                                          |" << endl;
		cout << RED << "|                                                                                                                            |" << endl;

		cout << RED << "|     "<< GREEN <<"    1) April "<< RED <<"                                                                                                          |" << endl;
		cout << RED << "|     "<< GREEN <<"     2) May    "<< RED <<"                                                                                                        |" << endl;
		cout << RED << "|      "<< GREEN <<"     3) October "<< RED <<"                                                                                                      |" << endl;
		cout << RED << "|       "<< GREEN <<"     4) November             "<< RED <<"                                                                                        |" << endl;
		cout << RED << "|                                                                                                                            |" << endl;
		cout << RED << "|________________________________________________________@@@_________________________________________________________________|" << endl;
		cout << YELLOW << "Who do you want to be?: ";
		cin >> option;
		cout << RESET;
}
