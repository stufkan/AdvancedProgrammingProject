// Eksamensprojekt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "StackOfInt.h"
#include "StackTemplate.h"
#include "StackTemplateValueArgument.h"
#include <string>
#include <iostream>


using string = std::string;

void StackOfIntTest();
void StackTemplateTest();

int _tmain(int argc, _TCHAR* argv[])
{
	StackTemplateValueArgument<int, 3> s = StackTemplateValueArgument<int, 3>();
	s.Push(5);
	s.Push(4);
	s.Push(3);

	std::cout << s.Pop() << "\n";
	std::cout << s.Pop() << "\n";
	std::cout << s.Pop() << "\n";

	int k;
	std::cin >> k;

	StackTemplateValueArgument<int, 2> t = StackTemplateValueArgument<int, 2>();
	t.Push(5);
	t.Push(4);
	t.Push(3);

	std::cout << t.Pop() << "\n";
	std::cout << t.Pop() << "\n";
	std::cout << t.Pop() << "\n";

	return 0;
}

void StackOfIntTest()
{
	StackOfInt s = StackOfInt();
	s.Push(5);
	s.Push(4);
	s.Push(3);

	std::cout << s.Pop() << "\n";
	std::cout << s.Pop() << "\n";
	std::cout << s.Pop() << "\n";
}

void StackTemplateTest(){
	StackTemplate<int> s = StackTemplate<int>();
	s.Push(5);
	s.Push(4);
	s.Push(3);

	std::cout << s.Pop() << "\n";
	std::cout << s.Pop() << "\n";
	std::cout << s.Pop() << "\n";

	StackTemplate<string> t = StackTemplate<string>();
	t.Push("first");
	t.Push("second");
	t.Push("third");

	std::cout << t.Pop() << "\n";
	std::cout << t.Pop() << "\n";
	std::cout << t.Pop() << "\n";
}