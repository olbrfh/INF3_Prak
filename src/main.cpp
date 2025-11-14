//============================================================================
// Name        : INF3_Prak.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <string>
#include <iostream>

#include <cstdio>      /* printf, NULL */
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */

#include <unistd.h>

#include "../headers/SHA256.H"
#include "../headers/TASK3.H"
#include "../headers/TASK4.H"
#include "../headers/TASK5.H"
#include "../headers/TASK6.H"

using namespace std;


int main(){
	srand(time(nullptr));
    TASK3::demoTask3();
    return 0;
}





