#include "List.h"

List::List()
{
	pHead = nullptr;
}

List::List(const List &listCopy)
{
	pHead = listCopy.pHead;

}

List::~List()
{

}

void List::setHeadPtr(ListNode *const newPHead)
{
	pHead = newPHead;
}

ListNode * List::getHeadPtr() const
{
	return pHead;
}