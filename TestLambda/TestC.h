#pragma once
#include <vector>
#include <functional>

class A
{
public:
	A() { _v.push_back(1); }

	void clearA() { std::cout << "clear A from " << this << std::endl; }

	void DoSomeWork() { std::cout << "Some work from A" << std::endl; }

private:
	std::vector<double> _v;
};


class B
{
public:
	B() {}

	void clearB() { std::cout << "clear B from " << this << std::endl; }

	void DoSomeWork() { std::cout << "Some work from B" << std::endl; }

private:
	std::vector<double> _v;
};

class Worker
{
public:
	Worker() {}

	void DoSomeWork0() {}

	template<class T> void DoSomeWork(T& data, std::function<void(T&)> clearer) { data.DoSomeWork(); clearer(data); }

};

