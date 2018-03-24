#include "headers/shop.h"
#include "headers/ColorConsole.h"
#include <fstream>
#include <iostream>

using namespace std;
void shop(string job, int money, string dateleft);
void gotoShop(){
	clearscreen();
	ifstream inData;
	string job, dateleft, tempjob, tempdateleft, tempc;
	int tempmoney, money;

	inData.open("playerstats.TMT");
	  if (inData.is_open())
	  {
	    //cout << "File successfully open\n";
	    inData >> tempjob >> tempmoney >> tempdateleft ; //get stats from save
	   inData.close();
	  }
	  else
	  {
	    cout << "Error opening file";
	  }
		job = tempjob;
		money = tempmoney;
		dateleft = tempdateleft;
	inData.close();
	char option = 'j';
		cout << RED << "________________________________________________________@@@___________________________________________________________________" << endl;
		cout << RED << "|  "<< GREEN <<"  Shop    "<< RED <<"                                                                                                                |" << endl;
		cout << RED << "|                                                                                                                            |" << endl;
		cout << RED << "|          "<< CYAN <<"WOW WOW!! You can't just leave with the right supplies!"<< RED <<"                                                           |" << endl;
		cout << RED << "|          "<< CYAN <<"  you have $"<< money << ". Don't go spending it all" << RED << "                                                                        |" << endl;
		cout << RED << "|          "<< CYAN <<"   You will need money while on the trail" << RED << "                                                                         |" << endl;
		cout << RED << "|                                                                                                                            |" << endl;
		cout << RED << "|                                                                                                                            |" << endl;
		cout << RED << "|________________________________________________________@@@_________________________________________________________________|" << endl;
		cout << YELLOW << "Press any letter and hit enter: ";
		cin >> option;
		shop(job, money, dateleft);


}
void shop(string job, int money, string dateleft){
	int tempmoney = money;

}
