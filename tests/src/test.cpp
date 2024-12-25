#include <gtest/gtest.h>
#include <fops/i64toa_10_inl.h>

TEST(i64toa_10_inl, UnsignedTest)
{
    size_t i64len;
    char buf[30];
    char* result = fops::i64toa_10(100, buf, i64len);

    ASSERT_TRUE(strcmp(result, "100") == 0);
}

TEST(i64toa_10_inl, SignedTest)
{
    size_t i64len;
    char buf[30];
    char* result = fops::i64toa_10(-100, buf, i64len);

    ASSERT_TRUE(strcmp(result, "-100") == 0);
}