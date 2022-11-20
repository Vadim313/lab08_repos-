#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			string s;
			string s2, s3;
			max_count(s, s2, s3);
		}
	};
};
