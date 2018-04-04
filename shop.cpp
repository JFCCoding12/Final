#include "headers/shop.h"
#include "headers/timer.h"
#include "headers/ColorConsole.h"
#include <fstream>
#include <iostream>
#include <time.h>
#include <stdio.h>


using namespace std;
void foodShop(int money);
void clothingShop();
void ammunitionStore();
void partsStore();
void startTheGame();
void shop();
void gotoShop(){
	clearscreen();
	ifstream inData;
	string job, dateleft, tempjob, tempMonth, tempc;
	int tempmoney, tempDay, tempYear = 0;

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
	    exit(1);
	  }
	string option;
		cout << RED << "________________________________________________________@@@___________________________________________________________________" << endl;
		cout << RED << "|  "<< GREEN <<"  Shop    "<< RED <<"                                                                                                                |" << endl;
		cout << RED << "|                                                                                                                            |" << endl;
		cout << RED << "|          "<< CYAN <<"WOW WOW!! You can't just leave with the right supplies!"<< RED <<"                                                           |" << endl;
		cout << RED << "|          "<< CYAN <<"  you have $"<< tempmoney << ". Don't go spending it all" << RED << "                                                                       |" << endl;
		cout << RED << "|          "<< CYAN <<"   You will need money while on the trail" << RED << "                                                                         |" << endl;
		cout << RED << "|                                                                                                                            |" << endl;
		cout << RED << "|                                                                                                                            |" << endl;
		cout << RED << "|________________________________________________________@@@_________________________________________________________________|" << endl;
		cout << YELLOW << "Press any letter and hit enter: ";
		cin >> option;
		shop();


}
void shop(){
	clearscreen();
	ifstream inData;
		string job, dateleft, tempjob, tempMonth, tempc;
		int money, tempDay, tempYear;

		inData.open("playerstats.TMT");
		  if (inData.is_open())
		  {
		    //cout << "File successfully open\n";
		    inData >> tempjob >> money >> tempMonth >> tempDay >> tempYear ; //get stats from save
		   inData.close();
		  }
		  else
		  {
		    cout << "Error opening file";
		    exit(1);
		  }
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
		foodShop(money);
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
		shop();
		break;
	}

}
void foodShop(int money){
	fstream inData;
	inData.open("playerbackpack.TMT");
	string temp1, temp2, temp3,temp4;
	if(!inData){
		cout << "Unable to open file" << endl;
		exit(1);
		}
		while(inData >> temp1 >> temp2 >> temp3 >> temp4){
			if(temp1 == "food:"){
				temp1, temp2, temp3, temp4 = ' ';
				cout <<  temp1 << " "<< temp2 <<" " << temp3 << " "<<temp4;
			}
		}
	fstream outData;
	outData.open("playerbackpack.TMT", ios::app);
	int option = 0;
	double price = 4.59;
	cout << RED << "________________________________________________________@@@___________________________________________________________________" << endl;
	cout << RED << "|  "<< GREEN <<"  Kittery Trading Post    "<< RED <<"                                                                                                "<< RED <<"|" << endl;
	cout << RED << "|  "<< GREEN <<"  Kittery, Maine    "<< RED <<"                                                                                                      "<< RED <<"|" << endl;
	cout << RED << "|  "<< GREEN <<"                       .-~-.                                                                                              "<< RED <<"|" << endl;
	cout << RED << "|  "<< GREEN <<"                     .'     '.                        It's recommened that you take 20 pounds                             "<< RED <<"|"<< endl;
	cout << RED << "|  "<< GREEN <<"                    /         \\                          of food per person. You can take                                 "<< RED <<"|"<< endl;
    cout << RED << "|  "<< GREEN <<"            .-~-.  :           ;                             more or less its up to you.                                  "<< RED <<"|"<< endl;
    cout << RED << "|  "<< GREEN <<"          .'     '.|           |                               It is $4.59 per pound.                                     "<< RED <<"|"<< endl;
    	cout << RED << "|  "<< GREEN <<"         /         \\          :                                                                                           "<< RED <<"|"<< endl;
	cout << RED << "|  "<< GREEN <<"        :           ; .-~""~-,/                                                                                             "<< RED <<"|"<< endl;
	cout << RED << "|  "<< GREEN <<"        |           /`        `'.                                                                                         "<< RED <<"|"<< endl;
	cout << RED << "|  "<< GREEN <<"        :          |             \\                                                                                        "<< RED <<"|"<< endl;
    cout << RED << "|  "<< GREEN <<"         \\         |             /                                                                                        "<< RED <<"|"<< endl;
    cout << RED << "|  "<< GREEN <<"          `.     .' \\          .'                                                                                         "<< RED <<"|"<< endl;
	cout << RED << "|  "<< GREEN <<"            `~~~`    '-.____.-'                                                                                          "<< RED <<" |" << endl;
	cout << RED << "|_______________________________________________________@@@__________________________________________________________________|" << endl;


	cout << YELLOW << "How many pounds do you want?: " << RESET;
	cin >> option;
	cout << RESET;
	if(!cin){
		 cin.clear();
		 cin.ignore();
		 outData.close();
		 foodShop(money);
	}else {
		int tempTotalPrice = price * option;
		if(tempTotalPrice > money){
			cout << "You don't have that much money!" << endl;
			 cin.clear();
			 cin.ignore();
			 outData.close();
			 sleep(10000);
			 clearscreen();
			 foodShop(money);
		}
	outData << "food: " << option <<' ' << "Price: "<< tempTotalPrice << endl;

	}
}
void clothingShop(){

}
void ammunitionStore(){

}
void partsStore(){

}
void startTheGame(){

}
