#pragma once
#

#include <iostream>

using namespace std;

class ListNode
{
public:
	ListNode(string newPlan, int newCalories, string newDate);
	ListNode(const ListNode &copyNode);

	~ListNode();

	//setters
	void setGoalCalories(int newGoalCalories);
	void setPlanName(string newPlanName);
	void setDate(string newDate);
	void setPNext(ListNode * const pNewNext);

	//getter
	int getGoalCalories() const;
	string getPlanName() const;
	string getDate() const;
	ListNode * getPNext() const;

private:
	string planName;
	int goalCalories;
	string date;
	ListNode *pNext;
};