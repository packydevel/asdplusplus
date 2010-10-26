/*
 * main.h
 *
 *  Created on: 26/ott/2010
 *      Author: packyuser
 */

#ifndef _MAIN_H
#define _MAIN_H

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#define _gerr(x) { fputs(x, stderr); system("pause"); exit(-1); }

#endif
