#include<iostream>
#include<vector>
using namespace std;
struct node
{
	int val;
	node *next = nullptr;
};

void insertNode(node *head)
{
	while(head -> next != nullptr && v[i] > head -> next -> val) {
		head = head -> next;
	}

	if(head -> next == nullptr && v[i] > head -> val) {
		node *newnode = new node;
		head -> next = newnode;
	}
	else if(head -> next != nullptr && v[i] <= head -> val) {

	}
}

int main()
{
	int n;
	while(cin >> n) {
		vector<int> v;
		int num;
		for(int i = 0; i < n; i++) {
			cin >> num;
			v.push_back(num);
		}
		node *head = new node;
		head -> val = v[0];
		for(int i = 1; i < v.size(); i++) insertNode(head, v[i]);
	}
}
