#include <bits/stdc++.h>
using namespace std;
// #define fo(i, n) for (int i = 0; i < n; i++)

class node
{
public:
	int data;
	node *link;
	node(int d)
	{
		data = d;
		link = NULL;
	}
};

class impl
{
public:
	node *first;
	impl()
	{
		first = NULL;
	}

	void insertAtEnd(int d)
	{
		node *m = new node(d);

		if (first == NULL)
		{
			first = m;
		}

		else
		{
			node *temp = first;
			while (temp->link != NULL)
			{
				temp = temp->link;
			}
			temp->link = m;
		}
	}

	void insertAfter(int d, int num)
	{
		node *m = new node(d);
		node *temp = first;
		while (temp->data != num)
		{
			temp = temp->link;
		}
		m->link = temp->link;
		temp->link = m;
	}

	void deleteBefore(int d)
	{
		node *temp = first;
		while (temp->link->link->data != d)
		{
			temp = temp->link;
		}
		temp->link = temp->link->link;
	}

	void display()
	{
		node *temp = first;
		while (temp != NULL)
		{
			cout << temp->data << "\t";
			temp = temp->link;
			// cout << "Hello";
		}
		cout << endl;
	}

	void printReverse(node *temp)
	{
		if (temp == NULL)
		{
			return;
		}

		else
		{
			printReverse(temp->link);
			cout << temp->data << " ";
		}
	}

	node *getHead()
	{
		return first;
	}
};

int main()
{
	impl llist;
	llist.insertAtEnd(0);
	llist.insertAtEnd(10);
	llist.insertAtEnd(20);
	llist.insertAtEnd(30);
	llist.insertAtEnd(40);
	llist.insertAfter(25, 20);
	llist.display();
	llist.deleteBefore(25);
	llist.display();
	llist.printReverse(llist.getHead());
	return 0;
}