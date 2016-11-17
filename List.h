#pragma once
#include "ListNode.h"

class List
{
public:
	List();
	List(const List &listCopy);

	~List();

	List & operator= (const List &rhs);

	void setHeadPtr(ListNode *const newPHead);

	ListNode * getHeadPtr() const;

private:
	ListNode *pHead;
	List *makeNode(const string newPlanName, const int newCalories, const string newDate);
	void destoryList();
};