#include "headers/shop.h"
#include "headers/ColorConsole.h"
#include <fstream>
#include <iostream>

using namespace std;
void foodShop();
void clothingShop();
void ammunitionStore();
void partsStore();
void startTheGame();
void shop(string job, int money, string tempMonth, int tempDay, int tempYear);
void gotoShop(){
	clearscreen();
	ifstream inData;
	string job, dateleft, tempjob, tempMonth, tempc;
	int tempmoney, money, tempDay, tempYear;

	inData.open("playerstats.TMT");
	  if (inData.is_open())
	  {
	    //cout << "File successfully open\n";
	    inData >> tempjob >> tempmoney >> tempMonth >> tempDay >> tempYear ; //get stats from save
	   inData.close();
	  }
	  else
	  {
	    cout << "Error opening file";
	  }
		job = tempjob;
		money = tempmoney;
	string option;
		cout << RED << "________________________________________________________@@@___________________________________________________________________" << endl;
		cout << RED << "|  "<< GREEN <<"  Shop    "<< RED <<"                                                                                                                |" << endl;
		cout << RED << "|                                                                                                                            |" << endl;
		cout << RED << "|          "<< CYAN <<"WOW WOW!! You can't just leave with the right supplies!"<< RED <<"                                                           |" << endl;
		cout << RED << "|          "<< CYAN <<"  you have $"<< money << ". Don't go spending it all" << RED << "                                                                       |" << endl;
		cout << RED << "|          "<< CYAN <<"   You will need money while on the trail" << RED << "                                                                         |" << endl;
		cout << RED << "|                                                                                                                            |" << endl;
		cout << RED << "|                                                                                                                            |" << endl;
		cout << RED << "|________________________________________________________@@@_________________________________________________________________|" << endl;
		cout << YELLOW << "Press any letter and hit enter: ";
		cin >> option;
		shop(job, money,tempMonth, tempDay, tempYear );


}
void shop(string job, int money, string tempMonth, int tempDay, int tempYear){
	clearscreen();
	int tempmoney = money;
	int option = 0;
			cout << RED << "________________________________________________________@@@___________________________________________________________________" << endl;
			cout << RED << "|  "<< GREEN <<"  Kittery Trading Post    "<< RED <<"                                                                                                |" << endl;
			cout << RED << "|  "<< GREEN <<"  Kittery, Maine    "<< RED <<"                                                                                                      |" << endl;
			cout << RED << "|                                                                                 "<< GREEN <<tempMonth <<" "<< tempDay <<", "<<tempYear<< RED <<"                                |" << endl;
			cout << RED << "|     "<< CYAN <<"Choosing the right time of year can make a big difference "<< RED <<"                                                             |" << endl;
			cout << RED << "|     "<< CYAN <<"         on how hard of a journey it will be "<< RED <<"                                                                          |" << endl;
			cout << RED << "|                                                                                                                            |" << endl;
			cout << RED << "|     "<< GREEN <<"    1) Oxen 		4) Ammunition		"<< RED <<"                                                                     |" << endl;
			cout << RED << "|     "<< GREEN <<"     2) Food 		 5) Spare Parts		   "<< RED <<"                                                                  |" << endl;
			cout << RED << "|      "<< GREEN <<"     3) Clothing 	  6) Start down the trail		 "<< RED <<"                                                    |" << endl;
			cout << RED << "|                                                                                                                            |" << endl;
			cout << RED << "|                                                                                                                            |" << endl;
			cout << RED << "|________________________________________________________@@@_________________________________________________________________|" << endl;
			cout << YELLOW << "Which item would you like to buy: " << RESET;
			cin >> option;
			cout << RESET;

	switch(option){
	case 1:
		//decide on transportation
		break;
	case 2:
		foodShop();
		break;
	case 3:
		clothingShop();
		break;
	case 4:
		ammunitionStore();
		break;
	case 5:
		partsStore();
		break;
	case 6:
		startTheGame(); //first day
		break;
	default:
		shop(job, money,tempMonth, tempDay, tempYear );
		break;
	}

}
void foodShop(){
	int option;
	cout << RED << "________________________________________________________@@@___________________________________________________________________" << endl;
	cout << RED << "|  "<< GREEN <<"  Kittery Trading Post    "<< RED <<"                                                                                                "<< RED <<"|" << endl;
	cout << RED << "|  "<< GREEN <<"  Kittery, Maine    "<< RED <<"                                                                                                      "<< RED <<"|" << endl;
	cout << RED << "|  "<< GREEN <<"                       .-~-.                                                                                              "<< RED <<"|" << endl;
	cout << RED << "|  "<< GREEN <<"                     .'     '.                                                                                            "<< RED <<"|"<< endl;
	cout << RED << "|  "<< GREEN <<"                    /         \\                                                                                           "<< RED <<"|"<< endl;
    cout << RED << "|  "<< GREEN <<"            .-~-.  :           ;                                                                                          "<< RED <<"|"<< endl;
    cout << RED << "|  "<< GREEN <<"          .'     '.|           |                                                                                          "<< RED <<"|"<< endl;
    	cout << RED << "|  "<< GREEN <<"         /         \\          :                                                                                           "<< RED <<"|"<< endl;
	cout << RED << "|  "<< GREEN <<"        :           ; .-~""~-,/                                                                                             "<< RED <<"|"<< endl;
	cout << RED << "|  "<< GREEN <<"        |           /`        `'.                                                                                        "<< RED <<"|"<< endl;
	cout << RED << "|  "<< GREEN <<"        :          |             \\                                                                                          "<< RED <<"|"<< endl;
    cout << RED << "|  "<< GREEN <<"         \\         |             /                                                                                        "<< RED <<"|"<< endl;
    cout << RED << "|  "<< GREEN <<"          `.     .' \\          .'                                                                                          "<< RED <<"|"<< endl;
	cout << RED << "|  "<< GREEN <<"            `~~~`    '-.____.-'                                                                                          "<< RED <<" |" << endl;
	cout << RED << "|_______________________________________________________@@@__________________________________________________________________|" << endl;


	cout << YELLOW << "Which item would you like to buy: " << RESET;
	cin >> option;
	cout << RESET;

}
void clothingShop(){

}
void ammunitionStore(){

}
void partsStore(){

}
void startTheGame(){

}
