#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

void main()
{
	Node* head = nullptr;
	Node* tail = nullptr;

	int n = 0;
	cout << "How many number of nodes do you want:";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int value;
		cout << "Enter value= ";
		cin >> value;

		Node* newNode = new Node();
		newNode->data = value;
		newNode->next = nullptr;
		if (head == nullptr)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}

	}
	Node* temp = head;
	int position = 1;
	int key;
	cout << "Enter value to find:";
	cin >> key;
	bool found = false;
	while (temp != nullptr)
	{
		if (temp->data == key)
		{
			cout << "Value found at positon " << position;
			found = true;
		}
		position++;
		temp = temp->next;

	}
	if (!found)
	{
		cout << "Value not found";
	}
	//Now delete the memeory allocation

	temp = head;
	while (temp != nullptr)
	{
		Node* newNode = temp->next;
		delete temp;
		temp = newNode;
	}
}