
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "unity_fixture.h"
#include "{{cookiecutter.module_name}}.h"

TEST_GROUP({{cookiecutter.module_name}});
//-----------------------------------------------------

TEST_SETUP({{cookiecutter.module_name}})
{
}

TEST_TEAR_DOWN({{cookiecutter.module_name}})
{
}
//-----------------------------------------------------

TEST({{cookiecutter.module_name}}, init_test)
{
    TEST_ASSERT(true);
}

TEST({{cookiecutter.module_name}}, func_test)
{
    TEST_IGNORE_MESSAGE("Not implemented yet");
}

// Functions to test: 

// Performance to test:

// Memory leaks to test:

// Error conditions to test:


//-----------------------------------------------------


TEST_GROUP_RUNNER({{cookiecutter.module_name}})
{
	RUN_TEST_CASE({{cookiecutter.module_name}}, init_test);
}
