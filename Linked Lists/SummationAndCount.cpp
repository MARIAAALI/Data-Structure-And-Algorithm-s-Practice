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

	int sum = 0;
	int count = 0;
	float average = 0;

	Node *temp = head;
	while (temp != nullptr)
	{
		count++;
		sum += temp->data;
		temp = temp->next;
	}
	cout << "Sum is: " << sum << endl;
	cout << "Number of nodes is" << count << endl;
	cout << "Average is" << (float)sum / count << endl;

	//Now delete the memeory allocation

	temp = head;
	while (temp != nullptr)
	{
		Node* newNode = temp->next;
		delete temp;
		temp = newNode;
	}
}