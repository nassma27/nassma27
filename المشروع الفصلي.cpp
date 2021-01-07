/*

Name : Nassma Hassan Abowd
Class: second
Department: Computer Engineering

*/

#include <iostream>
using namespace std;

struct node {
	int info;
// defining variable as integer
	struct node *next;
// defining grouped variables under one name, allowing different
// variables to be accessed via the declared name
	}*start;
	class list {
// creating object constructor defined by the programmer to be used in
// the program
		public:
// a class member that is available from any function
			node* create_node(int);
			void insert_begin();
			void insert_pos();
			void insert_last(); 
			void delete_pos();
// defining our main functions to be used in later codes, obviously
// these are our main functions for doing operations
			void search();
			void display();
			list() {
				start = NULL;
// giving initial value of null
				}
	};
int main() {
// widely known, for it means our function needs to return some integer
// at the end of the execution, which we do it by returning 0 (mostly)
	int choice;
// defining variable as an integer
	list sl;
// creating an object from class, which we'll declare it with the same
// sort of declaration we do to variables, we use it to access data
// members using the direct member access operator
		start = NULL;
		while (1)
// while(1) is used for infinite loop, it has no condition, and
// as 1 presents, then the condition is always true, to come out
// from this infinite loop, we have to use conditional statement
// and break statement
		{
			cout << endl << "\t  === Storing data using Linked List ===\n" << endl;
			cout << endl << "---------------------------------" << endl;
			cout << "(1) Insert item at beginning" << endl;
			cout << "(2) Insert item at the end" << endl;
			cout << "(3) Insert item at a position" << endl;
			cout << "(4) Delete a specific item" << endl;
			cout << "(5) Search Element" << endl;
			cout << "(6) Display Linked List" << endl;
			cout << "(7) Manual" << endl;
			cout << "(8) Exit " << endl;
			cout << "\nEnter your choice: ";
			cin >> choice;
// the above outputs are concerned in displaying list of options, so
// the user is aware of what he is doing
			switch(choice){
// switch statement allows a variable to be tested for equality against
// a list of values, each value is called a case, and the variable
// being switched on is checked for each case
			case 1:
				cout << "\nInserting Node at the Beginning ... " << endl;
				sl.insert_begin();
				cout << endl;
				break;
// the (.) is the direct member access operator
			case 2:
				cout << "\nInserting Node at the End ... " << endl;
				sl.insert_last();
				cout << endl;
				break;
			case 3:
// case to check/compare the inserted value with the switch case,
// for if it is true, its condition will be performed, break is used
// to terminate the loop
				cout << "\nInserting Node at a given position ... " << endl;
				sl.insert_pos();
				cout << endl;
				break;
			case 4:
				cout << "\nDeleting a particular node ... " << endl;
				sl.delete_pos();
				break;
// same as line 85,86,87
			case 5:
				cout << "\nSearching for an element in Linked List ... " << endl;
				sl.search();
				cout << endl;
				break;
			case 6:
// same as line 96
				cout << "\nDisplaying elements of Linked List ... " << endl;
				sl.display();
				cout << endl;
				break;
			case 7:
				cout << "\n\n\t    ========== User Manual ==========\n\n";
				cout << "\n===========================================================\n" << endl;
				cout << "(1) Use numbers to select your choice.\n\n" << endl;
				cout << "(2) Current Linked List only supports storing integers.\n" << endl;
				cout << "(3) Current program supports Adding, Deleting, Searching" << endl;
				cout << "    Viewing, and Inserting at a specific position but" << endl;
				cout << "    can be modified to occup strings and charachters\n    as well.\n" << endl;
				cout << "(4) Linked List works by storing data and the addresses" << endl;
				cout << "    of other nodes to refer to each other.\n" << endl;
				cout << "(5) You can exit the program using Key 8.\n" << endl;
				cout << "\n===========================================================\n\n" << endl;
				break;
			case 8:

				cout << "\nTerminating the Program ..." << endl;
				exit(1);

				break;
			default:
// the default case can be used for performing a task when none of the
// cases is true, no break is needed in the default case
				cout << "\nWrong choice, try again!" << endl;
			}
		}
	}
	node *list::create_node(int value)
// this is a reference to a pointer to a node object, allowing you
// to change the memory address pointed to by the pointer through the
// reference as well as the node value, through the pointer. we used
// scope resolution operator to define a function outside the class
	{
		struct node *temp;
// 
		temp = new(struct node);
// allocate memory for a node from heap, in case of the existence of
// costructor, temp will point to the node object
		if (temp == NULL){
			cout << "\nMemory not allocated " << endl;
			return 0;
// pointing node to not go past the end of the list
		}
		else {
			temp->info = value;
			temp->next = NULL;     
			return temp;
		}
	}
	void list::insert_begin()
// function used for element insertion at the begining of list
	{
		int value;
		cout << "\nEnter the value to be inserted: ";
		cin >> value;
// storing user input for the element
		struct node *temp, *p;
		temp = create_node(value);
		if (start == NULL) {
			start = temp;
			start->next = NULL;
		}
// to insert at the begining, we first allocate memory for new node,
// then we store data, change the next of the new node to point to
// the "p", or to point to a recently created node that pointed to "p"
		else
		{
			p = start;
			start = temp;
			start->next = p;
		}
// enforcing the inserted value to be at the begining of the list
		cout << "\nElement Inserted at beginning" << endl;
	}
	void list::insert_last()
// function used for element insertion at the end of list
	{
		int value;
		cout << "\nEnter the value to be inserted: ";
		cin >> value;
		struct node *temp, *s;
		temp = create_node(value);
		s = start;
		while (s->next != NULL)
		{
			s = s->next;
		}
// inserting at the end is much like at the begining, except for, here
// we traverse (travel through) to last node, either we change the next
// of last node to recently created one
		temp->next = NULL;
		s->next = temp;
		cout << "\nElement Inserted at last" << endl;  
	}
	void list::insert_pos()
// function used for element insertion purposes
	{
		int value, pos, counter = 0; 
		cout << "\nEnter the value to be inserted: ";
		cin >> value;
		struct node *temp, *s, *ptr;
// represent pointers to the struct
		temp = create_node(value);
		cout << "\nEnter the postion at which node to be inserted: ";
		cin >> pos;
		int i;
		s = start;
		while (s != NULL)
		{
			s = s->next;
			counter++;
		}
// adding to the middle is a little bit complicated, thus, it has been
// phased out and replaced with a more effective, easier one
		if (pos == 1) {
			if (start == NULL) {
				start = temp;
				start->next = NULL;
			}
// for inserting node in the middle, it should be implemented between
// the previous and the next node, but here, we count positions, and
// find the next and previous node for the specified position, 
			else {
				ptr = start;
				start = temp;
				start->next = ptr;
			}
		}
// then we insert the node between them, similar to what adding to the
// middle does, except for it's not as effective as adding to a
// specified position
		else if (pos > 1  && pos <= counter) {
			s = start;
			for (i = 1; i < pos; i++) {
				ptr = s;
				s = s->next;
			}
			ptr->next = temp;
			temp->next = s;
		}
		else {
			cout << "\nPositon out of range!" << endl;
		}
// encouter an error message when the inserted position does not exist
	}
	void list::delete_pos() {
// function used for element deletion purposes
		int pos, i, counter = 0;
		if (start == NULL) {
			cout << "\nList is empty" << endl;
			return;
		}
// you can not delete what does not exist in the first place
		cout << "\nEnter the position of value to be deleted: ";
		cin >> pos;
// asking for the position of the intended to delete element
		struct node *s, *ptr;
// represent pointers to the struct
		s = start;
		if (pos == 1) {
			start = s->next;
		}
		else {
			while (s != NULL) {
				s = s->next;
				counter++;
			}
// in order to delete a specific node, the program searches for the
// node one by one, starting from the first node
			if (pos > 0 && pos <= counter) {
				s = start;
				for (i = 1;i < pos;i++) {
					ptr = s;
					s = s->next;
				}
// what happens when looking for the required position is that, it
// keeps going and links previous node to the next
				ptr->next = s->next;
			}
			else {
				cout << "\nPosition out of range" << endl;
// if position did not satisfy the if condition, then it doesn't
// simply exist
			}
			free(s);
// deleting the node that fits the inserted describtion
			cout << "\nElement Deleted" << endl;
		}
	}
	void list::search() {
// function used for element search purposes
		int value, pos = 0;
		bool flag = false;
// the Boolean data type is used to declare a variable whose value
// will be set as true (1) or false (0)
		if (start == NULL) {
			cout << "\nList is empty" << endl;
			return;
// a condition where it checks the linked list for available elements
// in this scenario, it checks if the user has added any items already
		}
		cout << "\nEnter the value to be searched: ";
		cin >> value;
// requesting a keyword for searching
		struct node *s;
// represent a pointer to the struct
		s = start;
		while (s != NULL) {
			pos++;
			if (s->info == value) {
				flag = true;
				cout << "\nElement " << value << " is found at position " << pos << endl;
			}
			s = s->next;
		}
// using while loop to check every element in the list for the
// condition, the mechanism is that it checks positions one by one
// until it find a matching value, this mechanism can also be used in
// case we want to update an existing element with another recent
// element
		if (!flag)
			cout << "\nElement " << value << " not found in the list" << endl;
// using flag as a signal to show us that a certain condition has met
// which in our case, it tells that no matches were found
	}
	void list::display() {
// function used to display elements
		struct node *temp;
// represent a pointer to the struct
		if (start == NULL) {
			cout << "\nThe List is Empty" << endl;
			return;
// displaying an empty list message when no elements are available
		}
		temp = start;
		cout << "\nElements of the list are: " << endl;
		while (temp != NULL) {
			cout << temp->info << " --> ";
			temp = temp->next;
		}
// display elements of the list, we can't say that it is sorted, for
// we have the option to insert elements at a specific position
	}
