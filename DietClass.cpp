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

/*************************************************************
* Function: DietPlan ()                                     *
* Date Created: 06/28/16                                    *
* Date Last Modified: 06/28/16                              *
* Description: Empty constructor                            *
*                                                           *
* Input parameters: NONE                                    *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
DietPlan::DietPlan(void)
{
	planName = "";
	goalCalories = 0;
	date = "";
}

/*************************************************************
* Function: DietPlan ()                                     *
* Date Created: 06/28/16                                    *
* Date Last Modified: 06/28/16                              *
* Description: constructor                                  *
*                                                           *
* Input parameters: new calories, plan name, and date.      *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
DietPlan::DietPlan(int newGoalCalories, string newPlanName, string newDate)
{
	//sets the new attributes to the variables in the constructor.
	goalCalories = newGoalCalories;
	planName = newPlanName;
	date = newDate;
}

/*************************************************************
* Function: setGoalCalories ()                              *
* Date Created: 06/28/16                                    *
* Date Last Modified: 06/28/16                              *
* Description: setter for new calories.                     *
*                                                           *
* Input parameters: new calories                            *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void DietPlan::setGoalCalories(int newGoalCalories)
{
	//sets new calories to the goal calories.
	goalCalories = newGoalCalories;
}

/*************************************************************
* Function: setPlanName ()                                  *
* Date Created: 06/28/16                                    *
* Date Last Modified: 06/28/16                              *
* Description: setter for new plan name                     *
*                                                           *
* Input parameters: new plan name                           *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void DietPlan::setPlanName(string newPlanName)
{
	//sets the new plan name to the plan name in the constructor.
	planName = newPlanName;
}

/*************************************************************
* Function: setDate ()                                      *
* Date Created: 06/28/16                                    *
* Date Last Modified: 06/28/16                              *
* Description: setter for new date                          *
*                                                           *
* Input parameters: new date                                *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void DietPlan::setDate(string newDate)
{
	//sets the new date to the date in the constructor.
	date = newDate;
}

/*************************************************************
* Function: getGoalCalories ()                              *
* Date Created: 06/28/16                                    *
* Date Last Modified: 06/28/16                              *
* Description: getter for new calories                      *
*                                                           *
* Input parameters: NONE                                    *
* Returns: new calories                                     *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
int DietPlan::getGoalCalories() const
{
	//returns the new calories the user entered.
	return goalCalories;
}

/*************************************************************
* Function: editGoals ()                                    *
* Date Created: 06/30/16                                    *
* Date Last Modified: 06/30/16                              *
* Description: allows user to edit goal calories            *
*                                                           *
* Input parameters: diet array                              *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void DietPlan::editGoals(DietPlan dArray[])
{
	//Asks the user for which day they wanna edit their goals.
	cout << "For which day would you like to change your goal? (1-7)" << endl;
	int day = 0;
	//Stores the day the user enters.
	cin >> day;
	day -= 1;
	//Asks the user what their new calories will be.
	cout << "Please enter a new goal calorie." << endl;
	int gCal = 0;
	cin >> gCal;
	//changes the goal for the day the user selected.
	dArray[day].setGoalCalories(gCal);

	//prints out that days information after the goal has been changed.
	cout << dArray[day].getPlanName() << endl;
	cout << dArray[day].getGoalCalories() << endl;
	cout << dArray[day].getDate() << endl;
}

/*************************************************************
* Function: editDate ()                                     *
* Date Created: 06/30/16                                    *
* Date Last Modified: 06/30/16                              *
* Description: allows user to edit date                     *
*                                                           *
* Input parameters: diet array                              *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void DietPlan::editDate(DietPlan dArray[])
{
	//Asks the user for which day they wanna edit their goals.
	cout << "For which day would you like to change the date? (1-7)" << endl;
	int day = 0;
	//Stores the day the user enters.
	cin >> day;
	day -= 1;
	//Asks the user what their new calories will be.
	cout << "Please enter a new date. (mm/dd/yyyy)" << endl;
	string nDate;
	cin >> nDate;
	//changes the goal for the day the user selected.
	dArray[day].setDate(nDate);

	//prints out that days information after the goal has been changed.
	cout << dArray[day].getPlanName() << endl;
	cout << dArray[day].getGoalCalories() << endl;
	cout << dArray[day].getDate() << endl;
}

/*************************************************************
* Function: getPlanName ()                                  *
* Date Created: 06/28/16                                    *
* Date Last Modified: 06/28/16                              *
* Description: getter for new plan name                     *
*                                                           *
* Input parameters: NONE                                    *
* Returns: new plan name                                    *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
string DietPlan::getPlanName() const
{
	//returns the new plan the user entered.
	return planName;
}

/*************************************************************
* Function: getDate ()                                      *
* Date Created: 06/28/16                                    *
* Date Last Modified: 06/28/16                              *
* Description: getter for new date                          *
*                                                           *
* Input parameters: NONE                                    *
* Returns: new date                                         *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
string DietPlan::getDate() const
{
	//returns the new date the user entered.
	return date;
}

/*************************************************************
* Function: DietPlan ()                                     *
* Date Created: 07/01/16                                    *
* Date Last Modified: 07/01/16                              *
* Description: gets the goal calories for the new diet plan *
*                                                           *
* Input parameters: diet plan object                        *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
DietPlan::DietPlan(DietPlan &obj)
{
	//gets the goal calories and stores them into the constructor.
	goalCalories = obj.getGoalCalories();
	planName = obj.getPlanName();
	date = obj.getDate();
}

/*************************************************************
* Function: ~DietPlan ()                                    *
* Date Created: 07/01/16                                    *
* Date Last Modified: 07/01/16                              *
* Description: deletes all objects                          *
*                                                           *
* Input parameters: NONE                                    *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
DietPlan::~DietPlan()
{

}

/*************************************************************
* Function: operator>> ()                                   *
* Date Created: 07/01/16                                    *
* Date Last Modified: 07/01/16                              *
* Description: overload operator to read from the file      *
*                                                           *
* Input parameters: file, plan you're reading into          *
* Returns: operator                                         *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
fstream & operator>> (fstream &fstr, DietPlan &dPlan)
{
	//reads in a line from the file.
	char line[100] = "";
	fstr.getline(line, 100);
	dPlan.setPlanName(line);

	//reads in a line from the file and the converts it into an interger.
	string line2;
	fstr >> line2;
	int calories = atoi(line2.c_str());
	dPlan.setGoalCalories(calories);
	char newline;
	fstr.get(newline);

	//reads in a line from the file.
	char line3[30] = "";
	fstr.getline(line3, 30);
	dPlan.setDate(line3);
	fstr.get(newline);

	//returns the information that was read in.
	return fstr;
}

/*************************************************************
* Function: operator<< ()                                   *
* Date Created: 07/01/16                                    *
* Date Last Modified: 07/01/16                              *
* Description: overload operator to read into the file      *
*                                                           *
* Input parameters: file, plan you're reading to            *
* Returns: operator                                         *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
fstream & operator<< (fstream &fstr, const DietPlan &dPlan)
{
	//writes stuff from the diet plan into the file to store it.
	fstr << dPlan.getPlanName();
	fstr << dPlan.getGoalCalories(); 
	fstr << dPlan.getDate(); 

	return fstr;
}

/*************************************************************
* Function: operator<< ()                                   *
* Date Created: 07/01/16                                    *
* Date Last Modified: 07/01/16                              *
* Description: overload operator to print to the screen     *
*                                                           *
* Input parameters: ostream, plan you're reading            *
* Returns: operator                                         *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
ostream & operator<< (ostream &ostr, const DietPlan &dPlan)
{
	//Wrties stuff onto the screen.
	ostr << "Plan: " << dPlan.getPlanName() << endl;
	ostr << "Calories: " << dPlan.getGoalCalories() << endl;
	ostr << "Date: " << dPlan.getDate() << endl;

	return ostr;
}