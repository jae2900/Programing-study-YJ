#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> solution(vector<int> prices) {
	int size = prices.size();
	vector<int> answer(size);
	stack<int> st;
	for (int i = 0; i < size; i++) {
		//������ ��������ʰ� ���ø����� ���� ���簪���� ũ�ٸ�
		//-> ������ �������ٸ�
		while (!st.empty() && prices[st.top()] > prices[i]) {
			//������ ���������Ƿ� i - ���� �������� ����
			answer[st.top()] = i - st.top();
			//������
			st.pop();
			//�ݺ����� ����: ������ �������� �����Ǿ������
			//���簪���� ��������Ƿ� 1�����̾� �־��ֱ� ���ؼ���.
		}
		//���� �ε����� ���ÿ� �ֱ�
		st.push(i);
	}
	//������ �������� �ݺ�
	while (!st.empty()) {
		//������ Ư����ġ�� �̹̰��� �־����Ƿ� pushback�̳� insert���ϸ� �ȵȴ�.
		//�ڿ������� �־���ϹǷ� size-1 ���� top���� ���ش�.
		answer[st.top()] = size - st.top() - 1;
		st.pop();
	}
	return answer;
}
