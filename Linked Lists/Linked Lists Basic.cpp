#include <iostream>
using namespace std;
//Create the structure of node
//In linked list, we link these nodes together
struct Node
{
	//structure of node is made of 2 things
	//1.data
	int data;
	//2. pointer poiting towards next node
	Node* next;
};

//Now main

int main()
{
	//First let's make nodes and their pointer
	Node* first = new Node();//*first contains the address of first node
	Node* second = new Node();
	Node* third = new Node();

	//Next add data in those nodes
	// We'll use -> operators
	first->data = 10;
	second->data = 20;
	third->data = 30;
	//-> is an operator that can be used by pointers in add data to the nodes
	
	//Now we'll link the nodes
	first->next = second;
	//first stores the address of second
	second->next = third;
	third->next = nullptr;
	//null means linked list has ended
	Node* head = first;
	// So why are we using head pointer and what exactly is it?
	// This head is used to store the start of linked list. 
	//It's a good practice as the start of list can change
	//For example if we want to add a new node a the start

	//After this we'll make a pointer, that'll move through out the list and move from one node to another
	Node* temp = head;
	//Chnaging head later doesn't change temp. 
	//Consider both of them as different books with the same address writtern. 
	// Changing address on one book, doesn't affect the other book
	while (temp != nullptr)
	{
		cout << temp->data << endl;
		temp = temp->next;//moves the address to next pointer
	}

	cout << "Null" << endl;
	delete first;
	delete second;
	delete third;
	//Why bother deleting?
	//This is a small program so these memory spaces will be reclaimed in the end any ways.
	//Howver, this is a good habit when you'll work with bigger programs
	return 0;

}