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
#pragma once
#include <iostream> //needed for cout and cin.
#include <string> //needed to use strings.
#include <stdlib.h> //needed to pause program.
#include <fstream> //needed to read files.
#include <ostream> //needed to write to files.
#include <ios> //needed to input/output.

using namespace std; //using statement.

//Diet Plan class declaration
class DietPlan
{
public:
	//constuctor
	DietPlan();
	DietPlan(int newGoalCalories, string newPlanName, string newDate);

	//copy constuctor
	DietPlan(DietPlan &obj);

	//destructor
	~DietPlan();

	//setter
	void setGoalCalories(int newGoalCalories);
	void setPlanName(string newPlanName);
	void setDate(string newDate);

	//getter
	int getGoalCalories() const;
	string getPlanName() const;
	string getDate() const;
	
	//functions
	void editGoals(DietPlan dArray[]);
	void editDate(DietPlan dArray[]);

private:

	int goalCalories;
	string planName;
	string date;
};

//Exercise Plan class declaration
class ExercisePlan
{
public:

	//Constructor
	ExercisePlan();
	ExercisePlan(int newGoalStep, string newPlanName, string newDate);

	//Copy Contructor
	ExercisePlan(ExercisePlan &ep);

	//Destructor
	~ExercisePlan();

	//Setters
	void setGoalSteps(int newGoalStep);
	void setPlanName(string newPlanName);
	void setNewDate(string newDate);

	//Getters
	int getGoalStep() const;
	string getPlanName() const;
	string getDate() const;

	//functions
	void editGoals(ExercisePlan eArray[]);
	void editDate(ExercisePlan eArray[]);

private:

	int goalSteps;
	string planName;
	string date;
};

//App Wrapper class declaration
class FitnessAppWrapper
{
private:
	//file stream for diet
	fstream dietFstr;

	//file stream for exercise
	fstream exerciseFstr;

	//diet plan array
	DietPlan dietArray[7];

	//exercise plan array.
	ExercisePlan exerciseArray[7];

public:

	//App Wrapper function
	FitnessAppWrapper();

	//Function prototypes.
	void runApp(void);

	void loadDailyDietPlan(fstream &fileStream, DietPlan &dietPlan);

	void loadDailyExercisePlan(fstream &fileStr, ExercisePlan &exercisePlan);

	void loadWeeklyDietPlan(fstream &fileStream, DietPlan weeklyPlan[]);

	void loadWeeklyExercisePlan(fstream &fileStr, ExercisePlan weeklyPlan[]);

	void displayDailyDiet(DietPlan &dietPlan);

	void displayDailyExercise(ExercisePlan &exercisePlan);

	void displayWeeklyDietPlan(DietPlan weeklyPlan[]);

	void displayWeeklyExercisePlan(ExercisePlan weeklyPlan[]);

	void storeDailyDiet(fstream &fileStream, DietPlan &dietPlan);

	void storeDailyExercise(fstream &fileStr, ExercisePlan &exercisePlan);

	void storeWeeklyDiet(fstream &fileStream, DietPlan weeklyPlan[]);

	void storeWeeklyExercise(fstream &fileStr, ExercisePlan weeklyPlan[]);

	int displayMenu(int choice);
};

//Overloading prototypes for instreams/outstreams/insertion
fstream & operator>> (fstream &fstr, DietPlan &dPlan);

fstream & operator<< (fstream &fstr, const DietPlan &dPlan);

ostream & operator<< (ostream &ostr, const DietPlan &dPlan);

fstream & operator>> (fstream &fstr, ExercisePlan &ePlan);

fstream &operator<< (fstream &fstr, const ExercisePlan &ePlan);

ostream &operator<<(ostream &ostr, const ExercisePlan &ePlan);