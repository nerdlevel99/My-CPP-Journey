// C++ code to show working of the deque 
#include <deque> 
#include <iostream> 
using namespace std; 

// Driver Code 
int main() 
{ 
	deque<int> d = { 1, 2, 3 }; 

	d.push_back(4); 
	d.push_front(0); 

	cout << "Elements in Deque: " << endl; 

	for (int i : d) 
		cout << i << " "; 
	cout << endl; 

	d.pop_back(); 

	cout << "\n"
		<< "Elements in Deque after pop_back(): " << endl; 

	for (int i : d) 
		cout << i << " "; 
	cout << endl; 

	cout << "\n"
		<< "Elements in Deque after pop_front(): " << endl; 

	d.pop_front(); 

	for (int i : d) 
		cout << i << " "; 
	cout << endl; 

	cout << "\n"
		<< "Element in front of deque: " << d.front() 
		<< endl; 
	cout << "Element in back of deque: " << d.back() 
		<< endl; 

	cout << "Item at 1th Index: " << d.at(1) << endl; 

	cout << "Size of deque: " << d.size() << endl; 
	cout << "Is deque empty: " << d.empty() << endl; 

	cout << "\n"
		<< "After deleting all elements of deque:"
		<< "\n\n"; 

	d.erase(d.begin(), d.end()); 

	cout << "Size of deque: " << d.size() << endl; 
	cout << "Is deque empty: " << d.empty() << endl; 
}
