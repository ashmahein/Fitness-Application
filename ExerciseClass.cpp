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
* Function: ExercisePlan ()                                 *
* Date Created: 06/28/16                                    *
* Date Last Modified: 06/28/16                              *
* Description: Empty constructor                            *
*                                                           *
* Input parameters: NONE                                    *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
ExercisePlan::ExercisePlan(void)
{
	planName = "";
	goalSteps = 0;
	date = "";
}

/*************************************************************
* Function: DietPlan ()                                     *
* Date Created: 06/28/16                                    *
* Date Last Modified: 06/28/16                              *
* Description: constructor                                  *
*                                                           *
* Input parameters: new steps, plan name, and date.         *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
ExercisePlan::ExercisePlan(int newGoalStep, string newPlanName, string newDate)
{
	//sets the new attributes to the variables in the constructor.
	goalSteps = newGoalStep;
	planName = newPlanName;
	date = newDate;
}

/*************************************************************
* Function: setGoalSteps ()                                 *
* Date Created: 06/28/16                                    *
* Date Last Modified: 06/28/16                              *
* Description: setter for new steps.                        *
*                                                           *
* Input parameters: new steps                               *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void ExercisePlan::setGoalSteps(int newGoalStep)
{
	//sets new steps to the goal steps.
	goalSteps = newGoalStep;
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
void ExercisePlan::setPlanName(string newPlanName)
{
	//sets new plan name to the plan name.
	planName = newPlanName;
}

/*************************************************************
* Function: setNewDate ()                                      *
* Date Created: 06/28/16                                    *
* Date Last Modified: 06/28/16                              *
* Description: setter for new date                          *
*                                                           *
* Input parameters: new date                                *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void ExercisePlan::setNewDate(string newDate)
{
	//sets the new date to the date in the constructor.
	date = newDate;
}

/*************************************************************
* Function: getGoalStep ()                                  *
* Date Created: 06/28/16                                    *
* Date Last Modified: 06/28/16                              *
* Description: getter for new steps                         *
*                                                           *
* Input parameters: NONE                                    *
* Returns: new steps                                        *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
int ExercisePlan::getGoalStep() const
{
	//returns the new steps the user entered.
	return goalSteps;
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
string ExercisePlan::getPlanName() const
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
string ExercisePlan::getDate() const
{
	//returns the new date the user entered.
	return date;
}

/*************************************************************
* Function: ExercisePlan ()                                 *
* Date Created: 07/01/16                                    *
* Date Last Modified: 07/01/16                              *
* Description: gets the goal calories for the new diet plan *
*                                                           *
* Input parameters: exercise plan object                    *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
ExercisePlan::ExercisePlan(ExercisePlan &ep)
{
	//gets the goal steps and stores them into the constructor.
	goalSteps = ep.getGoalStep();
	planName = ep.getPlanName();
	date = ep.getDate();
}

/*************************************************************
* Function: ~ExercisePlan ()                                *
* Date Created: 07/01/16                                    *
* Date Last Modified: 07/01/16                              *
* Description: deletes all objects                          *
*                                                           *
* Input parameters: NONE                                    *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
ExercisePlan::~ExercisePlan()
{

}

/*************************************************************
* Function: editGoals ()                                    *
* Date Created: 06/30/16                                    *
* Date Last Modified: 06/30/16                              *
* Description: allows user to edit goal steps               *
*                                                           *
* Input parameters: exercise array                          *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void ExercisePlan::editGoals(ExercisePlan eArray[])
{
	//Asks the user for which day they wanna edit their goals.
	cout << "For which day would you like to change your goal? (1-7)" << endl;
	int day = 0;
	//Stores the day the user enters.
	cin >> day;
	day -= 1;

	//Asks the user what their new goal will be.
	cout << "Please enter the new goal steps." << endl;
	int gSteps = 0;
	cin >> gSteps;
	//changes the goal for the day the user selected.
	eArray[day].setGoalSteps(gSteps);

	//prints out that days information after the goal has been changed.
	cout << eArray[day].getPlanName() << endl;
	cout << eArray[day].getGoalStep() << endl;
	cout << eArray[day].getDate() << endl;
}

/*************************************************************
* Function: editDate ()                                     *
* Date Created: 06/30/16                                    *
* Date Last Modified: 06/30/16                              *
* Description: allows user to edit date                     *
*                                                           *
* Input parameters: exercise array                          *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void ExercisePlan::editDate(ExercisePlan eArray[])
{
	//Asks the user for which day they wanna edit their goals.
	cout << "For which day would you like to change the date? (1-7)" << endl;
	int day = 0;
	//Stores the day the user enters.
	cin >> day;
	day -= 1;

	//Asks the user what their new goal will be.
	cout << "Please enter the new date. (mm/dd/yyyy)" << endl;
	string nDate;
	cin >> nDate;
	//changes the goal for the day the user selected.
	eArray[day].setNewDate(nDate);

	//prints out that days information after the goal has been changed.
	cout << eArray[day].getPlanName() << endl;
	cout << eArray[day].getGoalStep() << endl;
	cout << eArray[day].getDate() << endl;
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
fstream & operator>> (fstream &fstr, ExercisePlan &ePlan)
{
	char line[30] = "";
	fstr.getline(line, 30);
	ePlan.setPlanName(line);

	string line2;
	fstr >> line2;
	int steps = atoi(line2.c_str());
	ePlan.setGoalSteps(steps);
	char newline;
	fstr.get(newline);

	char line3[30] = "";
	fstr.getline(line3, 30);
	ePlan.setNewDate(line3);
	fstr.get(newline);

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
fstream & operator<< (fstream &fstr, const ExercisePlan &ePlan)
{
	fstr << ePlan.getPlanName(); //endl;
	fstr << ePlan.getGoalStep(); //endl;
	fstr << ePlan.getDate(); //endl;

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
ostream & operator<<(ostream &ostr, const ExercisePlan &ePlan)
{
	ostr << ePlan.getPlanName() << endl;
	ostr << ePlan.getGoalStep() << endl;
	ostr << ePlan.getDate() << endl;

	return ostr;
}