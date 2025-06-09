#include <iostream>
using namespace std;
class animal{
public:
		virtual void 짖는다() = 0;

};

class 개 : public animal {
public:
	void 짖는다() {
		cout << "개 소리: " << "멍멍" << endl;
	}
};

class 고양이 : public animal {
public:
	void 짖는다() {
		cout << "고양이 소리: " << "야옹" << endl;
	}
};	

class 소 : public animal {
	public:
	void 짖는다() {
		cout << "소 소리: " << "음메" << endl;
	}
};

int main() {
	개 a개;
	고양이 a고양이;
	소 a소;

	animal* animals[3];
	animals[0] = &a개;
	animals[1] = &a고양이;
	animals[2] = &a소;

	for (int i = 0; i < 3; i++) {
		animals[i]->짖는다();
		
	}
	return 0;
}
