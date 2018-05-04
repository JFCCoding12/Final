#include <stdio.h>
#include <iostream>
#include <time.h>
#include "headers/timer.h"

using namespace std;

void sleep(unsigned int mseconds);
void clear();
void times();

void hunttimer()
{
	int t = 60;
    while (t > 0)
    {
     clear();
       cout <<"\r" << t-- << " Seconds Remaining" << endl;
       times();


    }
    printf("Hunt End");

}

void sleep(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}



void clear(){
#if defined(_WIN32)
  system("CLS");
#elif defined(__linux__)
  system("CLS");
#elif defined(__APPLE__)
		system("clear");
#endif
}



void times(){
#if defined(_WIN32)
       sleep(1000);
#elif defined(__linux__)
       sleep(1000000);
#elif defined(__APPLE__)
  sleep(1000000);
#endif
}
