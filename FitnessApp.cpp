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
* Function: FitnessAppWrapper ()                            *
* Date Created: 06/28/16                                    *
* Date Last Modified: 06/28/16                              *
* Description: Empty constructor                            *
*                                                           *
* Input parameters: NONE                                    *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
FitnessAppWrapper::FitnessAppWrapper(void)
{

}


/*************************************************************
* Function: DisplayMenu ()                                  *
* Date Created: 06/28/16                                    *
* Date Last Modified: 06/28/16                              *
* Description: Display's menu options for user to select.   *
*                                                           *
* Input parameters: Choice                                  *
* Returns: Choice                                           *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
int FitnessAppWrapper::displayMenu(int choice)
{
	//do while user want to exit.
	do
	{
		cout << "Please choose one of the following options:\n";
		cout << "1. Load weekly diet plan from file.\n2. Load weekly exercise plan from file.\n3. Store weekly diet plan to file.\n4. Store weekly exercise plan to file.\n5. Display weekly diet plan to screen.\n6. Display weekly exercise plan to screen.\n7. Edit daily diet plan.\n8. Edit daily exercise plan.\n9. Edit date of diet plan.\n10. Edit date of exercise plan.\n11. Exit.\n";
		cin >> choice;
	} while ((choice < 1) || (choice > 11));

	return choice;
}

/*************************************************************
* Function: loadDailyDietPlan ()                            *
* Date Created: 06/28/16                                    *
* Date Last Modified: 06/29/16                              *
* Description: load one diet plan from the file.            *
*                                                           *
* Input parameters: file, diet plan                         *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void FitnessAppWrapper::loadDailyDietPlan(fstream &fileStream, DietPlan &dietPlan) //load just one days plan into the first index of your array.
{
	//grabs info from the diet plan using the overloaded extraction operator.
	fileStream >> dietPlan;
}

/*************************************************************
* Function: loadWeeklyDietPlan ()                           *
* Date Created: 06/29/16                                    *
* Date Last Modified: 06/29/16                              *
* Description: loads weeks diet plan from the file.         *
*                                                           *
* Input parameters: file, diet plan array.                  *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void FitnessAppWrapper::loadWeeklyDietPlan(fstream &fileStream, DietPlan weeklyPlan[])
{
	int index = 0;
	//Calls the daily load diet plan to read information and stores it into an array.
	for (index = 0; index < 7; index++)
	{
		loadDailyDietPlan(fileStream, weeklyPlan[index]);
	}
}

/*************************************************************
* Function: displayDailyDiet ()                             *
* Date Created: 06/29/16                                    *
* Date Last Modified: 06/29/16                              *
* Description: displays diet plan from the file.            *
*                                                           *
* Input parameters: diet plan.                              *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void FitnessAppWrapper::displayDailyDiet(DietPlan &dietPlan)
{
	//prints out information to the screen.
	cout << dietPlan;
}

/*************************************************************
* Function: displayWeeklyDietPlan ()                        *
* Date Created: 06/29/16                                    *
* Date Last Modified: 07/1/16                               *
* Description: displays weeks diet plan from the file.      *
*                                                           *
* Input parameters: diet plan array.                        *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void FitnessAppWrapper::displayWeeklyDietPlan(DietPlan weeklyPlan[])
{
	int index = 0;
	//prints out information to the screen for all 7 days.
	for (index = 0; index < 7; index++)
	{
		displayDailyDiet(weeklyPlan[index]);
	}
}

/*************************************************************
* Function: storeDailyDiet ()                               *
* Date Created: 06/29/16                                    *
* Date Last Modified: 07/1/16                               *
* Description: displays weeks diet plan from the file.      *
*                                                           *
* Input parameters: file, diet plan.                        *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void FitnessAppWrapper::storeDailyDiet(fstream &fileStream, DietPlan &dietPlan)
{
	//Stores daily information from the user into the file.
	fileStream << dietPlan.getPlanName();
	fileStream.put('\n');
	fileStream << dietPlan.getGoalCalories();
	fileStream.put('\n');
	fileStream << dietPlan.getDate();
	fileStream.put('\n');
	fileStream.put('\n');
}

/*************************************************************
* Function: storeWeeklyDiet ()                              *
* Date Created: 06/29/16                                    *
* Date Last Modified: 07/1/16                               *
* Description: displays weeks exercise plan from the file.  *
*                                                           *
* Input parameters: file, diet plan array.                  *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void FitnessAppWrapper::storeWeeklyDiet(fstream &fileStream, DietPlan weeklyPlan[])
{
	int index = 0;
	//Stores information into the array once the user has edited it.
	for (index = 0; index < 7; index++)
	{
		storeDailyDiet(fileStream, weeklyPlan[index]);
	}
}

/*************************************************************
* Function: loadDailyExercisePlan ()                        *
* Date Created: 06/28/16                                    *
* Date Last Modified: 06/29/16                              *
* Description: load one exercise plan from the file.        *
*                                                           *
* Input parameters: file, exercise plan                     *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void FitnessAppWrapper::loadDailyExercisePlan(fstream &fileStr, ExercisePlan &exercisePlan)
{
	//loads info from the exercise file
	fileStr >> exercisePlan;
}

/*************************************************************
* Function: loadWeeklyExercisePlan ()                       *
* Date Created: 06/29/16                                    *
* Date Last Modified: 06/29/16                              *
* Description: loads weeks exercise plan from the file.     *
*                                                           *
* Input parameters: file, exercies plan array.              *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void FitnessAppWrapper::loadWeeklyExercisePlan(fstream &fileStr, ExercisePlan weeklyPlan[])
{
	int index = 0;
	//loads in a weeks worth of information into the exercise plan array.
	for (index = 0; index < 7; index++)
	{
		loadDailyExercisePlan(fileStr, weeklyPlan[index]);
	}
}

/*************************************************************
* Function: displayDailyExercise ()                         *
* Date Created: 06/29/16                                    *
* Date Last Modified: 06/29/16                              *
* Description: displays exercise plan from the file.        *
*                                                           *
* Input parameters: exercise plan.                          *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void FitnessAppWrapper::displayDailyExercise(ExercisePlan &exercisePlan)
{
	//prints out information from the exercise file.
	cout << exercisePlan;
}

/*************************************************************
* Function: displayWeeklyExercisePlan ()                    *
* Date Created: 06/29/16                                    *
* Date Last Modified: 07/1/16                               *
* Description: displays weeks exercise plan from the file.  *
*                                                           *
* Input parameters: exercise plan array.                    *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void FitnessAppWrapper::displayWeeklyExercisePlan(ExercisePlan weeklyPlan[])
{
	int index = 0;
	//displays the weekly exercise plan from the array.
	for (index = 0; index < 7; index++)
	{
		displayDailyExercise(weeklyPlan[index]);
	}
}

/*************************************************************
* Function: storeDailyExercise ()                           *
* Date Created: 06/29/16                                    *
* Date Last Modified: 07/1/16                               *
* Description: displays weeks exercise plan from the file.  *
*                                                           *
* Input parameters: file, exercise plan.                    *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void FitnessAppWrapper::storeDailyExercise(fstream &fileStr, ExercisePlan &exercisePlan)
{
	//Stores information into the file.
	fileStr << exercisePlan.getPlanName();
	fileStr.put('\n');
	fileStr << exercisePlan.getGoalStep();
	fileStr.put('\n');
	fileStr << exercisePlan.getDate();
	fileStr.put('\n');
	fileStr.put('\n');
}

/*************************************************************
* Function: storeWeeklyExercise ()                          *
* Date Created: 06/29/16                                    *
* Date Last Modified: 07/1/16                               *
* Description: displays weeks exercise plan from the file.  *
*                                                           *
* Input parameters: file, exercise plan array.              *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void FitnessAppWrapper::storeWeeklyExercise(fstream &fileStr, ExercisePlan weeklyPlan[])
{
	int index = 0;
	//Stores the information from the array into a file.
	for (index = 0; index < 7; index++)
	{
		storeDailyExercise(fileStr, weeklyPlan[index]);
	}
}

/*************************************************************
* Function: runApp ()                                       *
* Date Created: 07/02/16                                    *
* Date Last Modified: 07/02/16                              *
* Description: runs the entire app. Calls above functions.  *
*                                                           *
* Input parameters: NONE                                    *
* Returns: NONE                                             *
* Preconditions: NONE                                       *
* Postconditions: NONE                                      *
*************************************************************/
void FitnessAppWrapper::runApp(void)
{
	cout << "Welcome to the Fitness tracker!" << endl;

	//objects of the diet plan and the exercise plan.
	DietPlan dp;
	ExercisePlan ep;

	int option = 0;
	//Do while loop that is called until the user quits.
	do
	{
		option = displayMenu(option);

		if (option == 1)
		{
			//1.    Load weekly diet plan from file.
			dietFstr.open("dietPlan.txt");
			loadWeeklyDietPlan(dietFstr, dietArray); //WORKS.
			cout << "Diet Plan Loaded..." << endl;
			dietFstr.close();
		}
		else if (option == 2)
		{
			//2.    Load weekly exercise plan from file
			exerciseFstr.open("exercisePlan.txt");
			loadWeeklyExercisePlan(exerciseFstr, exerciseArray); //WORKS
			cout << "Exercise Plan Loaded..." << endl;
			exerciseFstr.close();
		}
		else if (option == 3)
		{
			//3.    Store weekly diet plan to file.
			dietFstr.open("dietPlan.txt");
			storeWeeklyDiet(dietFstr, dietArray);
			dietFstr.close();
		}
		else if (option == 4)
		{
			//4.    Store weekly exercise plan to file
			exerciseFstr.open("exercisePlan.txt");
			storeWeeklyExercise(exerciseFstr, exerciseArray);
			exerciseFstr.close();
		}
		else if (option == 5)
		{
			//5.    Display weekly diet plan to screen.
			displayWeeklyDietPlan(dietArray);
		}
		else if (option == 6)
		{
			//6.    Display weekly exercise plan to screen.
			displayWeeklyExercisePlan(exerciseArray);
		}
		else if (option == 7)
		{
			//7.    Edit daily diet plan.
			dp.editGoals(dietArray);
			
		}
		else if (option == 8)
		{
			//8.    Edit daily exercise plan.
			ep.editGoals(exerciseArray);
		}
		else if(option == 9)
		{
			//edit date for diet plan
			dp.editDate(dietArray);
		}
		else if (option == 10)
		{
			//edit date for exercise plan.
			ep.editDate(exerciseArray);
		}
		else if (option == 11)
		{
			//11.    Exit.
			dietFstr.open("dietPlan.txt");
			storeWeeklyDiet(dietFstr, dietArray);
			dietFstr.close();
			cout << "Fitness plan has exited." << endl;
			exerciseFstr.open("exercisePlan.txt");
			storeWeeklyExercise(exerciseFstr, exerciseArray);
			exerciseFstr.close();
			break;
		}
	} while (option != 11);
}