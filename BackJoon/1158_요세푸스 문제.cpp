#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	queue<int> q;
	
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <=n; i++){
		q.push(i);
	}

	cout << "<";
	while (!q.empty()){
		int number;
		for (int i = 0; i < k-1; i++){
			number = q.front();
			q.pop();
			q.push(number);
		}
		number = q.front();
		q.pop();
		if (q.size() > 0)	cout << number << ", ";
		else cout << number<<">";
	}
}
