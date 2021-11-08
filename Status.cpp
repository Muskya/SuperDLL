#include "pch.h"
#include "Status.h"

// DLL internal state variables 
static int someVar;
static bool anothervar;
static float vector;

namespace TheoDLL {

	void sayHi(const char* msg) {
		std::cout << msg << std::endl;
	}

	void swap(DWORD& _left, DWORD& _right) {
		DWORD tmp = _left;
		_left = _right;
		_right = tmp;
	}
}
