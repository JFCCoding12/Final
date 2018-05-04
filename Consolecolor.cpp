/*
 * ColorConsole.h
 *
 *  Created on: Mar 2, 2018
 *      Author: jakefolsom
 */


#if defined(__APPLE__)

#include <string>
std::string  RESET  = "\033[0m";
std::string BLACK  = "\033[30m";    /* Black */
std::string  RED   =   "\033[31m";     /* Red */
std::string GREEN  = "\033[32m"; /* Green */
std::string YELLOW = "\033[33m";/* Yellow */
std::string BLUE   = "\033[34m"; /* Blue */
std::string MAGENTA = "\033[35m";   /* Magenta */
std::string CYAN  =  "\033[36m";   /* Cyan */
std::string WHITE  = "\033[37m"; /* White */
std::string BOLDBLACK  = "\033[1m\033[30m";/* Bold Black */
std::string BOLDRED    = "\033[1m\033[31m";/* Bold Red */
std::string BOLDGREEN  ="\033[1m\033[32m";/* Bold Green */
std::string BOLDYELLOW = "\033[1m\033[33m";  /* Bold Yellow */
std::string BOLDBLUE   = "\033[1m\033[34m";   /* Bold Blue */
std::string BOLDMAGENTA = "\033[1m\033[35m";     /* Bold Magenta */
std::string BOLDCYAN   = "\033[1m\033[36m";     /* Bold Cyan */
std::string BOLDWHITE =  "\033[1m\033[37m";
#endif
#if defined(_WIN32)
#include <iostream>
#include <windows.h>

inline std::ostream& BLUE(std::ostream &s)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdout, FOREGROUND_BLUE
              |FOREGROUND_GREEN|FOREGROUND_INTENSITY);
    return s;
}

inline std::ostream& RED(std::ostream &s)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdout,
                FOREGROUND_RED|FOREGROUND_INTENSITY);
    return s;
}

inline std::ostream& GREEN(std::ostream &s)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdout,
              FOREGROUND_GREEN|FOREGROUND_INTENSITY);
    return s;
}

inline std::ostream& YELLOW(std::ostream &s)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdout,
         FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY);
    return s;
}

inline std::ostream& RESET(std::ostream &s)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdout,
       FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
    return s;
}
inline std::ostream& CYAN(std::ostream &s)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdout, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    return s;
}


struct color {
    color(WORD attribute):m_color(attribute){};
    WORD m_color;
};

template <class _Elem, class _Traits>
std::basic_ostream<_Elem,_Traits>&
      operator<<(std::basic_ostream<_Elem,_Traits>& i, color& c)
{
    HANDLE hStdout=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdout,c.m_color);
    return i;
}
#endif
