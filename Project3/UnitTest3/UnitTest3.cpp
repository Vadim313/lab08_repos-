#include "pch.h"
#include "CppUnitTest.h"
#include "../Project3/Project3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[101];
			Count(str);
			char* dest = new char[151];
			dest = Change(str);
		}
	};
}
