#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>
using namespace std;

#include "EnvCheck.hh"
using namespace CCNEnvCheck;

#define GTEST(testName) TEST(TEST_CASE,testName)

#define TEST_CASE FileBasedCallDataParserTest

GTEST(shouldValidateTheEnvironment)
{
    EnvCheck envObject;

    envObject.printNumbers();
}
