/*******************************************************************************
* Programmer: Ash Mahein                                                      *
* Class: CptS 122; Lab Section 1                                              *
* Programming Assignment: 4                                                   *
* Date: 7/2/16                                                                *
*                                                                             *
* Description: This program is a fitness app which gives the user certain     *
*              goals that they have to meet dieting and exercising. It allows *
*              the user to also edit their goals.                             *
*                                                                             *
* Relevant Formulas: NONE									                  *
* Collaboration: Andy O'Fallon, Rahul Singal                                  *
* Websites used: NONE                                                         *
******************************************************************************/
#include "FitnessApp.h"


int main(int argc, char *argv[])
{
	//App Wrapper function
	FitnessAppWrapper appWrap;

	//Run app call.
	appWrap.runApp();

	system("pause");
	return 0;
}