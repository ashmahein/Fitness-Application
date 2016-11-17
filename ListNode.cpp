#include "ListNode.h"

ListNode::ListNode(string newPlan, int newCalories, string newDate)
{
	planName = newPlan;
	goalCalories = newCalories;
	date = newDate;
}

ListNode::ListNode(const ListNode &copyNode)
{
	planName = copyNode.planName;
	goalCalories = copyNode.goalCalories;
	date = copyNode.date;
}

ListNode::~ListNode()
{

}

void ListNode::setGoalCalories(int newGoalCalories)
{
	goalCalories = newGoalCalories;
}
void ListNode::setPlanName(string newPlanName)
{
	planName = newPlanName;
}
void ListNode::setDate(string newDate)
{
	date = newDate;
}
void ListNode::setPNext(ListNode * const pNewNext)
{
	pNext = pNewNext;
}

int ListNode::getGoalCalories() const
{
	return goalCalories;
}
string ListNode::getPlanName() const
{
	return planName;
}
string ListNode::getDate() const
{
	return date;
}
ListNode * ListNode::getPNext() const
{
	return pNext;
}