#include "pch.h"
#include "CppUnitTest.h"
#include "../Project4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str;
			Count(str);
			string dest = Change(str);
		}
	};
}
