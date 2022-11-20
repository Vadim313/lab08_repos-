#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char str[101];
			char c = '+';
			char v = '-';
			char b = '=';
			char* dest1 = new char[151];
			dest1[0] = '\0';
			char* dest2;
			dest2 = Change(dest1, str, dest1, 0);
			Count(str, c, v, b);
		}
	};
}
