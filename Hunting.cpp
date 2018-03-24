/*
 * Hunting aspect of final game...
 *
 * Made by Jacob Folsom
 *
 */

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdio.h>
#include "headers/Movinglogic.h"

using namespace std;


bool gamerunning = true;

/*
 * Let's write for osx systems cause apple doesn't have
 * <windows.h> so we will have to make a hacky way for the terminal to work
 * how we want it to....
 *
 */



#if defined(__APPLE__)





void play(){

	MovingAnimals();
  char ch;
    //seting the terminal in raw mode
	system("clear");
	for(int i = 1; i < 11; i++){
	 			cout << map[i] << endl;
	 		}
	system("stty raw");
do{
     ch=getchar();
       if(ch == 'd'){
    	   system("stty cooked");//right
    	   Move(0,1, 0);

       } else if(ch == 'a'){ //left
    	   system("stty cooked");
    	   Move(0,-1, 0);

       }else if(ch == ' '){ //shot
    	   system("stty cooked");
    	   Move(-1,0,1);

       }else if(ch == 'n'){
    	   system("stty cooked");
    	   MovingAnimals();

       }
          else {
        	  system("stty cooked");

          }
	system("clear");
	for(int i = 1; i < 11; i++){
	 			cout << map[i] << endl;
	 		}

	cout << "hit: "<< hit << endl;


	 system("stty raw");
}while(ch != '~');
system("stty cooked");
cout << "Good Bye\n";
}


#endif
/*
 * Lets remake everything we did above for windows......
 *
 * we can include <windows.h> so we don't need the
 * hacky way we moved the shooter around above
 *
 */

#if defined(_WIN32)
#include <windows.h>

int main(){
	cout << "Unfinished section!\n";
	return -1;

}









#endif

