#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

void main()
{
	//IN Dynamic Mmeory Allocation, we'll use head and tail
	Node* head = nullptr;
	Node* tail = nullptr;

	int number;
	cout << "Enter Number Of Nodes: ";
	cin >> number;

	for (int i = 0; i < number; i++)
	{
		int value;
		cout << "Enter Value Of Node" << i + 1 << ": ";
		cin >> value;

		//Now create a code that creates new nodes with each iteration

		Node* NewNode = new Node();

		//Now assign its members

		NewNode->data = value;
		NewNode->next = nullptr;

		//Null because we don't know if there will be a next node

		if (head == nullptr)
		{
			//This only runs in the first iteration
			head = NewNode;
			tail = NewNode;

			//= means both are pointing at the first node
			//if the list has only one node then that means head and tail are poiting at saem node
		}
		else
		{
			tail->next = NewNode;
			//Right now tail is poiting a tthe node created in previous iteration
			//With this, it'll store the addres of new node of this iteration in previous node
			tail = NewNode;
			//Now it'll move towards the new node made duirng this iteration
		}

		Node* temp = head;

		while (temp != nullptr)
		{
			cout << temp->data << endl;
			temp = temp->next;
		}
	}

	//Now, how to dlete Dynamically Allocated memory linked list?
		Node *temp = head; //back at the start of the list
		while (temp != nullptr)
		{
			//First we'll need a pointer that'll store the address stores in the node that has to be deleted
			Node* newNode = temp->next;
			delete temp;
			//this will delete the node where temp is pointing in the loop
			//We have already stored the address in this deleted node that points at the next node
			temp = newNode;
			//Now temp will point at this node
			//One by one all nodes will be deleted until Null is reached
		}
		

	
}