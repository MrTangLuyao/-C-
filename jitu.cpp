//2022.3.16˼�������������
//����ͬ�� author : Nicktang
#include <iostream>
#define rabit (heads - chicken)
using namespace std;

int main() {
	int chicken = 0;
	int heads;
	int legs;
	cout << "����ͬ��������\nby Nicktang\n�����������ж��ٸ�ͷ" << endl;
	cin >> heads;
	cout << " \n ��������������\n";
	cin >> legs;
	//cout << "���Խ��" << heads << legs << chicken <<endl;
	while (legs<chicken*2+rabit*4) {
		chicken = chicken + 1;
		//cout << "���Խ��" << heads << legs << chicken << endl;
	}
	if (chicken < 0 || rabit < 0) {
		cout << "����ֵ�����Ⱑ�����һ�°�" << endl;
		system("pause");
		return 0;
	}else {
		cout << "���:\n������" << chicken << "\n������" << (heads - chicken) << endl;
		system("pause");
		return 0;
	}
	
}