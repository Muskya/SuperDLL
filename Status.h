#pragma once
#include <iostream>
#include <Windows.h>

#ifdef SUPERDLL_EXPORTS
#define SUPERDLL_API __declspec(dllexport)
#else
#define SUPERDLL_API __declspec(dllimport)
#endif

namespace TheoDLL {

	extern "C" SUPERDLL_API void dllStat();
	extern "C" SUPERDLL_API void sayHi(const char* msg);
	extern "C" SUPERDLL_API void swap(DWORD & _left, DWORD & _right);

	enum class Action { Sleeping, Working, Playing, Eating };
	extern "C" std::ostream & operator<<(std::ostream & out, Action act) {
		switch (act) {
		case Action::Sleeping:
			out << "Sleeping";
			break;
		case Action::Working:
			out << "Working";
			break;
		case Action::Playing:
			out << "Playing";
			break;
		case Action::Eating:
			out << "Eating";
			break;
		default:
			break;
		}

		return out;
	}
}

