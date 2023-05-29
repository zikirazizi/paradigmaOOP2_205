#include <iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenlan() final {
		cout << "Hallo saya Function dari base class";
	}
};

