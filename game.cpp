#include <iostream>
#include "headers/game.h"
#include "headers/ColorConsole.h"
#include "headers/shop.h"
#include "headers/Movinglogic.h"
#include <cctype>
#include <string>
#include "headers/main.h"
#include <unistd.h> // for usleep function



using namespace std;
string player1, player2, player3;
int credits();

void clearscreen(){
#if defined(_WIN32)
  system("CLS");
#elif defined(__linux__)
  system("CLS");
#elif defined(__APPLE__)
		system("clear");
#endif
}
void getnames();
void checkNames();
void pickDate();
int dayy, yearr;
string monthh;
void newgame(){
	int option = 0;
	cout << RED << "________________________________________________________@@@___________________________________________________________________" << endl;
	cout << RED << "|  "<< GREEN <<"  Many People make the trip up north.    "<< RED <<"                                                                                 |" << endl;
	cout << RED <<        "|                                                                                                                            |" << endl;
	cout << RED <<        "|     "<< GREEN <<"   You may be                           "<< RED <<"                                                                               |" << endl;
	cout << RED <<       "|     "<< GREEN <<"    1) Mass Business man on Vacation  "<< RED <<"                                                                                 |" << endl;
	cout << RED <<        "|     "<< GREEN <<"     2) Mainah heading to The County    "<< RED <<"                                                                               |" << endl;
	cout << RED <<        "|      "<< GREEN <<"     3) Canadian coming back from Old Orchard Beach "<< RED <<"                                                                  |" << endl;
	cout << RED <<       "|                                                                                                                            |" << endl;
	cout << RED <<       "|                                                                                                                            |" << endl;
	cout << RED << "|________________________________________________________@@@_________________________________________________________________|" << endl;
	cout << YELLOW << "Who do you want to be?: "<< RESET;
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
		setmoney(9000);
			getnames();
			break;
	case 2:

		 setmoney(9000);
		getnames();
		break;
	case 3:
		setmoney(9000);
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
		switch(i){
		case 1:
			player1 = option;
			break;
		case 2:
			player2 = option;
			break;
		case 3:
			player3 = option;
			break;
		default:
			exit(-99);
			break;
		}

		i++;
	}while(i<=3);
	checkNames();
}
void checkNames(){
	clearscreen();
	char option;
	char c;
		cout << RED << "_______________________________________________________@@@___________________________________________________________________" << endl;
	        cout <<    "		" << player1 <<"																												   " << endl;
	    	    cout <<    "		" << player2 <<"																											   " << endl;
		    cout <<    "		" << player3 <<"																												   " << endl;
	    	    cout <<    "																														   " << endl;
		cout << RED << "_______________________________________________________@@@____________________________________________________________________" << endl;
		cout << YELLOW << "Are you sure you want these names?(Y/N): "<< RESET;
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
		cout << RED << "|     "<< GREEN <<"     2) July    "<< RED <<"                                                                                                        |" << endl;
		cout << RED << "|      "<< GREEN <<"     3) October "<< RED <<"                                                                                                      |" << endl;
		cout << RED << "|       "<< GREEN <<"     4) January             "<< RED <<"                                                                                        |" << endl;
		cout << RED << "|                                                                                                                            |" << endl;
		cout << RED << "|________________________________________________________@@@_________________________________________________________________|" << endl;
		cout << YELLOW << "What Month do you want to start in?: " << RESET;
		cin >> option;
		switch(option){
		case 1:
			setdate(4, 1, 2018);
		dayy = 1;
		monthh = "April";
		yearr = 2018;
			gotoShop();
			break;
		case 2:
			setdate(7, 1, 2018);
		 dayy = 1;
			 monthh = "July";
			 yearr = 2018;
			gotoShop();
			break;
		case 3:
			setdate(9, 1, 2018);
			 dayy = 1;
			 monthh = "October";
			 yearr = 2018;
			gotoShop();
			break;
		case 4:
			setdate(1, 1, 2019);
			 dayy = 1;
			 monthh = "January";
			 yearr = 2019;
			gotoShop();
			break;
		default:
			pickDate();
			break;
		}

}

void gameLoop(){

	string location, writeup,writeup1, writeup2,writeup3, locspace, option3;
	int temp, temp1, temp2,temp3;
	int pick = 0;

do{
	clearscreen();
	switch(dayy){
	case 1:
		location = "Kittery, Maine";
		writeup = " You start your journey in the beautiful Kittery, Maine located at the southernmost point of the state. ";
		writeup1 = "      Kittery has a wide variety of attractions including many shops to visit. ";
		writeup2 ="        Make sure you visit the Trading Post to gather all your supplies for your journey ahead. ";
		writeup3 ="       ";
		temp = 119 - writeup.length();
		temp1 = 119 - writeup1.length();
		temp2 = 119 - writeup2.length();
		temp3 = 119 - writeup3.length();
		option3 = "      3) Next day";
		break;
	case 2:
		 location = "Augusta, Maine";
		 writeup = " You have now arrived at the State's magnificent capital. Unlike most States, Augusta is located more to the  ";
		 		writeup1 = "southern tip of the state due to the majority of the population being located there. Check out the State House and  ";
		 		writeup2 ="   the many historical locations as well as take a stop at the store if you need any more supplies. ";
		 		writeup3 ="     ";
		 		temp = 119 - writeup.length();
		 		temp1 = 119 - writeup1.length();
		 		temp2 = 119 - writeup2.length();
				temp3 = 119 - writeup3.length();
				option3 = "      3) Next day";


		break;
	case 3:
		 location = "Bangor, Maine";
		 writeup = " WELCOME to Bangor Maine another one of Maine's high traffic cities that lays right on Interstate 95 on your ";
		 		writeup1 = "journey to the North. Visit the Paul Bunyan Statue with his ax over one shoulder and log mover in the other. ";
		 		writeup2 ="   As always, don't forget to visit the store to pick up any supplies you might need for the rest of your journey.";
		 		writeup3 ="      ";
		 		temp = 119 - writeup.length();
		 		temp1 = 119 - writeup1.length();
		 		temp2 = 119 - writeup2.length();
				temp3 = 119 - writeup3.length();
				option3 = "      3) Next day";

		break;
	case 4:
		 location = "Presque Isle, Maine";
		 writeup = " Welcome to the Northern wonders of the State. Rural Maine has many different features to offer, and ";
		 		writeup1 = "you work your way to the end of your journey. Want to go out with and Pick Potatoes or maybe Blueberries?";
		 		writeup2 =" Or maybe go for a quick hike up Mars Hill? During your stop don't forget to stop at";
		 		writeup3 ="     the store and pick up anything you might need.";
		 		temp = 119 - writeup.length();
		 		temp1 = 119 - writeup1.length();
		 		temp2 = 119 - writeup2.length();
		 		temp3 = 119 - writeup3.length();
		 		option3 = "      3) Next day";
		break;
	case 5:
		location = "Edmundston, Canada";
		writeup = " You have reached the end of your journey and made it through the wonderful state of Maine and into ";
				writeup1 = "Cannada! We hope you enjoyed your time during your travels and got to experience all that Maine offers. ";
				writeup2 =" ";
				writeup3 =" ";
				temp = 119 - writeup.length();
				temp1 = 119 - writeup1.length();
				temp2 = 119 - writeup2.length();
		 		temp3 = 119 - writeup3.length();


				option3 = "      3) End Game";
		break;

	}


	cin.clear();
	cout << RED << "________________________________________________________@@@___________________________________________________________________" << endl;
	cout << RED << "|                                                                                                                            |" << endl;
	cout << RED << "|  "<< GREEN <<location<< RED << endl;
	cout << RED << "|                                                                                 "<< GREEN <<monthh <<" "<< dayy <<", "<<yearr<< RED <<"                              |" << endl;
	cout << RED << "|     "<< CYAN << writeup  << RED << string(temp, ' ') << "|"<< endl;
	cout << RED << "|     "<< CYAN << writeup1  << RED << string(temp1, ' ') << "|"<< endl;
	cout << RED << "|     "<< CYAN << writeup2  << RED << string(temp2, ' ') << "|"<< endl;
	cout << RED << "|     "<< CYAN << writeup3  << RED << string(temp3, ' ') << "|"<< endl;
	cout << RED << "|                                                                                                                            |" << endl;
	cout << RED << "|     "<< GREEN <<"    1) Hunt  		             "<< RED <<"                                                                                |" << endl;
	cout << RED << "|     "<< GREEN <<"     2) Shop"<< RED <<"                                                                                                           |" << endl;
	cout << RED << "|     "<< GREEN << option3 << RED <<"                                                                                                      |" << endl;
	cout << RED << "|                                                                                                                            |" << endl;
	cout << RED << "|________________________________________________________@@@_________________________________________________________________|" << endl;
	cout << YELLOW << "Which item would you like to buy: " << RESET;
	cin >> pick;
	if(pick == 1){
		play();
		break;
	}else if(pick == 2){
		shop();
		break;
	}else if(pick == 3){
		dayy++;
		randomEvent();
	}else if(pick != 1 || pick != 2 || pick != 3){
		cout << "How" << endl;
	}
}while(dayy != 6);
credits();
}



void p(const char *str){
        write(1,str,strlen(str));
        sleep(1);
}


const char creditsimage[] =
		"\n"
				"\n"
				"\n"
				"\n"
				"\n"
 "       ____              _ _ _       \n "
"     / ___|_ __ ___  __| (_) |_ ___  \n"
"     | |   | '__/ _ \\/ _` | | __/ __| \n"
"     | |___| | |  __/ (_| | | |_\\__ \\ \n"
"      \\____|_|  \\___|\\__,_|_|\\__|___/  \n"
"\n";



int credits()
{
	cout << CYAN;
    printf("%s", creditsimage);

    printf("Version 1.0 \n");
    for (int i = 0; i < 15; i ++) {
    		int j = 300000;
            usleep(j); // move faster and faster,
            j = (int)(j); // so sleep less each time
            printf("\n"); // move  a line upward

        }
    write(2,"\33[18A",5); // move 9 line up
    write(2,"\33[10B",5); // move 10 line down
      p("Developer: "); p("Jacob Folsom");
      write(2,"\33[8A",5); // move 1 line up
               p("Developers: ");p("Jacob Folsom ");
         write(2,"\33[8B",5); // move 1 line down
      write(1,"\33[2K\r",5); //erase line and carriage return
      p("Developer: "); p("Noah Binette");
      write(2,"\33[8A",5); // move 1 line up
               p("Developers: ");p("Jacob Folsom, ");p("Noah Binette ");
         write(2,"\33[8B",5); // move 1 line down
      write(1,"\33[2K\r",5); //erase line and carriage return
      p("Developer: "); p("Cyran Wllis");
      write(1,"\33[8A",5); // move 1 line up
                     p("Developers: ");p("Jacob Folsom, ");p("Noah Binette, "); p("Cyran Willis");
               write(2,"\33[8B",5); // move 1 line down
            write(1,"\33[2K\r",5); //erase line and carriage return
            p("Developer: "); p("Matthew Bento");
                  write(1,"\33[8A",5); // move 1 line up
                                 p("velopers: ");p("Jacob Folsom, ");p("Noah Binette, "); p("Cyran Willis, ");p("Matthew Bento");
                           write(2,"\33[8B",5); // move 1 line down
                        write(1,"\33[2K\r",5); //erase line and carriage return

           p("Thanks for playing!!!!!");
           usleep(3000);
           return main();
}


