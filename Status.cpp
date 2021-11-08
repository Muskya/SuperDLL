#include "pch.h"
#include "Status.h"

// DLL internal state variables 
static int someVar;
static bool anothervar;
static float vector;

namespace TheoDLL {
	void dllStat() {
		std::cout << "Hello from .DLL" << std::endl;
	}

	void sayHi(const char* msg) {
		std::cout << msg << std::endl;
	}

	void swap(DWORD& _left, DWORD& _right) {
		DWORD tmp = _left;
		_left = _right;
		_right = tmp;
	}
}

Status::Status(uint8_t age, const char* name, TheoDLL::Action action) {
	this->age = age;
	this->name = name;
	this->currentAction = action;
}

void Status::status() {
	std::cout << this->getAge() << std::endl;
	std::cout << this->getName() << std::endl;
	std::cout << this->getAction() << std::endl;
}

