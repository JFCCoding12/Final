#include "headers/shop.h"
#include "headers/stats.h"
#include "headers/timer.h"
#include "headers/ColorConsole.h"
#include "headers/game.h"
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <cstdlib>


using namespace std;
void foodShop();
void clothingShop();
void ammunitionStore();
void shop();
void gotoShop(){
	clearscreen();
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
		shop();


}
void shop(){
	clearscreen();
	int option = 0;
			cout << RED << "________________________________________________________@@@___________________________________________________________________" << endl;
			cout << RED << "|  "<< GREEN <<"  Kittery Trading Post.com    "<< RED <<"                                                                                            |" << endl;
			cout << RED << "|  "<< GREEN <<"  Kittery, Maine    "<< RED <<"                                                                                                      |" << endl;
			cout << RED << "|                                                            "<< GREEN <<"You Have: $"<< money << RED <<"                                                 |" << endl;
			cout << RED << "|     "<< CYAN <<"Welcome to the Kittery Trading Post's Website!"<< RED <<"                                                                         |" << endl;
			cout << RED << "|     "<< CYAN <<"   Be sure you pick up all your goods! "<< RED <<"                                                                                |" << endl;
			cout << RED << "|                                                                                                                            |" << endl;
			cout << RED << "|     "<< GREEN <<"    1) Food 		3) Clothing		"<< RED <<"                                                                    |" << endl;
			cout << RED << "|     "<< GREEN <<"     2) Ammunition  4) Go Down The trail		   "<< RED <<"                                                                  |" << endl;			cout << RED << "|                                                                                                                            |" << endl;
			cout << RED << "|                                                                                                                            |" << endl;
			cout << RED << "|________________________________________________________@@@_________________________________________________________________|" << endl;
			cout << YELLOW << "Which item would you like to buy: " << RESET;
			cin >> option;
			cout << RESET;

	switch(option){
	case 1:
		foodShop();
		break;
	case 3:
		clothingShop();
		break;
	case 2:
		ammunitionStore();
		break;
	case 4:
		gameLoop(); //first day
		break;
	default:
		shop();
		break;
	}

}
void foodShop(){


	int option = 0;
	double price = 4.59;
	cout << RED << "________________________________________________________@@@___________________________________________________________________" << endl;
	cout << RED << "|  "<< GREEN <<"  Kittery Trading Post.com    "<< RED <<"                                                                                                "<< RED <<"|" << endl;
	cout << RED << "|  "<< GREEN <<"  Kittery, Maine    "<< RED <<"                                                                                                      "<< RED <<"|" << endl;
	cout << RED << "|  "<< GREEN <<"                       .-~-.                                                                                              "<< RED <<"|" << endl;
	cout << RED << "|  "<< GREEN <<"                     .'     '.                        It's recommended that you take 20 pounds                             "<< RED <<"|"<< endl;
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
		 foodShop();
	}else {
		int tempTotalPrice = price * option;
		if(tempTotalPrice > money){
			cout << "You don't have that much money!" << endl;
			 cin.clear();
			 cin.ignore();
			 sleep(10000);
			 clearscreen();
			 foodShop();
		}
		money = money - tempTotalPrice;
		food = food + option;
		shop();
	}
}
void clothingShop()
{

	int option = 0;
cout<<RED << "________________________________________________________@@@___________________________________________________________________" << endl;
cout<<RED << "|  " << GREEN << "  Kittery Trading Post.com    " << RED << "                                                                                            " << RED << "|" << endl;
cout<<RED << "|  " << GREEN << "  Kittery, Maine    " << RED << "                                                                                                      " << RED << "|" << endl;
cout<<RED << "|" << GREEN << "      .-'\\                                            It's very important to stay warm in wintah                            " << RED << "|" << endl;
cout<<RED << "|" << GREEN << "   .-'  `/\\                                             1) Summer Weah.(Cahaaht Shorts)                                     " << RED << "|" << endl;
cout<<RED << "|" << GREEN << ".-'      `/\\                                              2) Fall Weah. (Cahaaht Pants)                                     " << RED << "|" << endl;
cout<<RED << "|" << GREEN << "\\         `/\\                                              3) Wintah Weah(Double Stich Cahaaht Pants).                      " << RED << "|" << endl;
cout<<RED << "|" << GREEN << " \\        `/\\                                                                                                               " << RED << "|" << endl;
cout<<RED << "|" << GREEN << "  \\    _-   `/\\       _.--.                                                                                                 " << RED << "|" << endl;
cout<<RED << "|" << GREEN << "   \\    _-   `/`-..--\\     )                                                                                                " << RED << "|" << endl;
cout<<RED << "|" << GREEN << "    \\    _-   `,','  /    ,')                                                                                               " << RED << "|" << endl;
cout<<RED << "|" << GREEN << "     `-_   -   ` -- ~   ,','                                                                                                " << RED << "|" << endl;
cout<<RED << "|" << GREEN << "      `-              ,','                                                                                                  " << RED << "|" << endl;
cout<<RED << "|" << GREEN << "       \\,--.    ____==-~                                                                                                    " << RED << "|" << endl;
cout<<RED << "|" << GREEN << "        \\   \\_-~\\                                                                                                           " << RED << "|" << endl;
cout<<RED << "|" << GREEN << "         `_-~_.-'                                                                                                           " << RED << "|" << endl;
cout<<RED << "|" << GREEN << "          \\-~                                                                                                               " << RED << "|" << endl;
cout<<RED << "|_______________________________________________________@@@__________________________________________________________________|" << endl;
cout << YELLOW << "What type of weah do you want?: " << RESET;
cin >> option;
cout << RESET;
if(!cin){
	 cin.clear();
	 cin.ignore();
	 clothingShop();
}else {
switch (option) {
case 1:
	if(80 > money){
					cout << "You don't have that much money!" << endl;
					 cin.clear();
					 cin.ignore();
					 sleep(10000);
					 clearscreen();
					 clothingShop();
					 break;
				}else{
	cout << "You've chosen Summer Weah." << endl;
	money = money - 80;
	shop();
	break;
				}
case 2:
	if(120 > money){
				cout << "You don't have that much money!" << endl;
						 cin.clear();
						 cin.ignore();
						 sleep(10000);
						 clearscreen();
						 clothingShop();
						 break;
					}else{
	cout << "You've Chosen Fall Weah" << endl;
	money = money - 120;
	shop();
	break;
		}
case 3:
	if(210 > money){
						cout << "You don't have that much money!" << endl;
						 cin.clear();
						 cin.ignore();
						 sleep(10000);
						 clearscreen();
						 clothingShop();
						 break;
					}else{
						cout << "You've Chosen Wintah Weah" << endl;
						money = money - 210;
						shop();
						break;
}

}
}
}

void ammunitionStore() {

	int option = 0;
	int price = 100;
	cout<<RED<<"  ________________________________________________________@@@___________________________________________________________________" << endl;
	cout <<RED<< "|"<<GREEN <<"  Kittery Trading Post.com    " << RED << "                                                                                                " << RED << "|" << endl;
	cout <<RED<< "|"<<GREEN <<"  Kittery, Maine    " << RED << "                                                                                                          " << RED << "|" << endl;
	cout <<RED<< "|"<<GREEN <<"	        (\_          _/)                                                                                                " << RED << "|" << endl;
	cout <<RED<< "|"<<GREEN <<"              )  (        )  (                             Gonna need some ammo to get that Bull!                             " << RED << "|" << endl;
    cout <<RED<< "|"<<GREEN <<"             (    (      )    )                             20 Rounds Per Box for 100$ a box.                                 " << RED << "|" << endl;
	cout <<RED<< "|"<<GREEN <<"	       )  _( \\.--./  )_(                    Also, Due to State Law you gonna need a HUNTING AND FISHING LICENSE        " << RED << "|" << endl;
	cout <<RED<< "|"<<GREEN <<"                `)` 6  6 '('                                      Those go for 125 bucks!                                     " << RED << "|" << endl;
	cout <<RED<< "|"<<GREEN <<"                 /        \\                                    How many boxes you want bud?                                   " << RED << "|" << endl;
	cout <<RED<< "|"<<GREEN <<" 	         (  )    (  )                                                                                                  " << RED << "|" << endl;
	cout <<RED<< "|"<<GREEN <<"		   (_c__c_)                                                                                                    " << RED << "|" << endl;
	cout <<RED<< "|"<<GREEN <<"                    `--`                                                                                                      " << RED << "|" << endl;
	cout <<RED<< "|"<<GREEN <<"	                                                                                                                       " << RED << "|" << endl;
	cout <<RED<< "|"<<GREEN <<"	                                                                                                                       " << RED << "|" << endl;
	cout <<RED<< "|_______________________________________________________@@@____________________________________________________________________|" << endl;
	cout << YELLOW << "How many pounds do you want?: " << RESET;
		cin >> option;
		cout << RESET;
		if(!cin){
			 cin.clear();
			 cin.ignore();
			 foodShop();
		}else {
			int tempTotalPrice = price * option;
			if(tempTotalPrice > money){
				cout << "You don't have that much money!" << endl;
				 cin.clear();
				 cin.ignore();
				 sleep(10000);
				 clearscreen();
				 ammunitionStore();
			}
			money = money - tempTotalPrice - 125;
			ammo = ammo + option;
			shop();
		}



}
void changemoney(int change){
	money = money - change;

}
void changeAmmo(int change){
	ammo =  ammo - change;
}
void changeFood(int change){
	food = food - change;
}
void setmoney(int moneey){
	money = moneey;
}
void setdate(int mont, int dayy, int yearr){
	day = dayy;
	year = yearr;
	month = mont;
}

void randomEvent();

void randomEvent(){
  srand(time(NULL));
  float badLuck;
  string temp;
  if(49.89 > (rand() % 100) ){//approx 50% chance of an event happening
    switch (rand() % 6) {
      case 0:
    	  clearscreen();
        //lost food
        cout<<"During your travels, it looks like you've lost track of some of your food! Must have hit one of the hard frost heaves or a large hole in the road and it just fell out. Too late now them Coyotes must have got to it. You can always pick up more at the store or bag a nice looking Moose out there in the woods.\n";
        badLuck = ((rand() % 5) + 1);
        food -= badLuck;
        cout<<"You lost "<<badLuck<<" pounds of food!\n";
        cin >> temp;
        cin.ignore();
        break;
      case 1:
        //robbed
    	  clearscreen();
        cout<<"PUT THEM UP! Look out he's holding a lobster to you, you might as well give him the money he wants. Them pinchers on that lobster will hurt if they get you. \n";
        badLuck = (rand() % (money / 2) + 1);
        money -= badLuck;
        cout<<"You lost "<<badLuck<<" dollars!\n";
        cin >> temp;
        cin.ignore();
        break;
      case 2:
        //lost ammo
    	  clearscreen();
        cout<<"Oh no what happened to that box of ammo it's all soggy. Someone must have left it out in the rain and now the shells are soaked and ruined. That's a bummer! Should pick up some more at the store next time you are around. \n";
        badLuck = (rand() % (ammo / 4) + 1);
        ammo =- badLuck;
        cout<<"You lost "<<badLuck<<" rounds of ammo!\n";
        cin >> temp;
        cin.ignore();
        break;
      case 3:
        //Lost hunting/fishing license
    	  clearscreen();
        cout<<"Game Warden has stopped you and asked for your license. No Problem, you bought one but where did you put that thing again? Seems as though you lost \n it! Well, that's no good, thats's a 75$ fine to the State and your gonna need to buy another one so there is a total of 200$ big ones down the drain. \n";
        money -= 275;
        cin >> temp;
        cin.ignore();
        break;
      case 4:
        //roadkill
    	  clearscreen();
        cout<<"Oh baby someone hit a dear and left it! That's good eating right there pick that deer up for dinner tonight!\n";
        badLuck = (rand() % 200) + 1;
        cout<<"You scavenged"<<badLuck<<" pounds of meat from that roadkill!\n";
        food += badLuck;
        cin >> temp;
        cin.ignore();
        break;
      case 5:
        //random money floating around
    	  clearscreen();
        cout<<"There is something floating in the wind over! looks kinda like a pamphlet? No, wait that's Money! Grab that, seems to be your lucky day.\n";
        badLuck = (rand() % 75) + 51;
        cout<<"You caught "<<badLuck<<"dollars\n";
        money += badLuck;
        cin >> temp;
        cin.ignore();
        break;
      default:
    	  	  break;
    } /* switch */
  } /* if */
} /* void randomEvent */
