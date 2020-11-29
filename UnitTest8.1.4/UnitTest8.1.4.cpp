#include "pch.h"
#include "CppUnitTest.h"
#include "../Project8.1.4/project8.1.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest814
{
	TEST_CLASS(UnitTest814)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			char s[9] = "12.4.6.8";
			c = find_index(s);
			Assert::AreEqual(c, 6);
		}
	};
}
