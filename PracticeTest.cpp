/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_a_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ba");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, single_lower_case)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, single_upper_case)
{
    Practice obj;
    bool actual = obj.isPalindrome("A");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_w_spaces)
{
    Practice obj;
    bool actual = obj.isPalindrome("a a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome_w_spaces)
{
    Practice obj;
    bool actual = obj.isPalindrome("a b");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_palindrome_w_two_spaces)
{
    Practice obj;
    bool actual = obj.isPalindrome("b a b");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_not_palindrome_w_two_spaces)
{
    Practice obj;
    bool actual = obj.isPalindrome("a b b");
    ASSERT_FALSE(actual);
}
