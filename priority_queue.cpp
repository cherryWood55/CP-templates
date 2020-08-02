//Priority queue
#include <bits/stdc++.h>
using namespace std;
//display max heap
void display_queue1(priority_queue<int> p)
{
	priority_queue<int> q=p;
	while (!q.empty()){
		int a = q.top();
		cout << a << endl;
		q.pop();
	}
}
//display min heap
void display_queue2(priority_queue<int, vector<int>, greater<int>> p)
{
	priority_queue<int, vector<int>, greater<int>> q=p;
	while (!q.empty()){
		int a = q.top();
		cout << a << endl;
		q.pop();
	}
}
int main()
{
	priority_queue <int> q;//definition of max heap
	q.push(0);
	q.push(9);
	q.push(8);
	q.push(90);
	q.push(-7);

	cout << "Max heap:\n";
	display_queue1(q);

	priority_queue <int, vector<int>, greater<int>> q1;//definition of min heap
	q1.push(0);
	q1.push(9);
	q1.push(8);
	q1.push(90);
	q1.push(-7);
	cout << "Min heap:\n";
	display_queue2(q1);
	return 0;
}