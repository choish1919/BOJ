#include <iostream>
#include <vector>
#include <string>

using namespace std;

class stack {
private:
	int ptr;
	int a[10000];
public:
	stack() { ptr = -1; }
	void push(int x);
	int pop();
	int size();
	int empty();
	int top();
};

void stack::push(int x) {
	a[++ptr] = x;
}

int stack::pop() {
	if (ptr < 0) return -1;
	return a[ptr--];
}

int stack::size() {
	return ptr + 1;
}

int stack::empty() {
	return (ptr < 0) ? 1 : 0;
}

int stack::top(){
	if (ptr < 0) return -1;
	return a[ptr];
}

int main() {
	int n;
	cin >> n;
	stack st;
	cin.ignore();
	while (n--) {
		string s;
		getline(cin, s);
		if (s.substr(0, 3).compare("top") == 0) {
			cout << st.top() << endl;
		}
		if (s.substr(0, 3).compare("pop") == 0) {
			cout << st.pop() << endl;
		}
		if (s.substr(0, 4).compare("size") == 0) {
			cout << st.size() << endl;
		}
		if (s.substr(0, 5).compare("empty") == 0) {
			cout << st.empty() << endl;
		}
		if (s.substr(0, 4).compare("push") == 0) {
			int x = stoi(s.substr(5, s.size()-4));
			st.push(x);
		}
	}
	return 0;
}