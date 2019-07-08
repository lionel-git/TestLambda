#include <iostream>
#include "TestC.h"
#include <functional>
#include <algorithm>

int main(int argc, char** argv)
{
	std::cout << "Hello world" << std::endl;

	std::function<int(int)> func = [](int i) { return i + 4; };
	std::cout << "func: " << func(6) << '\n';

	//std::sort(v.begin(), v.end(), [](int a, int b) { return abs(a) <= abs(b); }

	//[] (int x) -> bool { return (x == 0); }

	Worker w;
	A a;
	B b;

	std::cout << "a=" << &a << std::endl;
	a.clearA();
	std::cout << "b=" << &b << std::endl;
	b.clearB();

	std::function<void(A&)> clearA = [](A& a) -> void { a.clearA(); };
	std::function<void(B&)> clearB = [](B& b) -> void { b.clearB(); };

	w.DoSomeWork(a, clearA);
	w.DoSomeWork(b, clearB);

	//w.DoSomeWork(a, [](A& x) -> void { x.clearA(); });

//	w.DoSomeWork(b, [](B& b) -> void { b.clearB(); });

}