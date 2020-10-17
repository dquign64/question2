#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"
#include "question2.cpp"
#include "main.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("Test get_sales_commission function"){
	REQUIRE(get_sales_commission(100)==5);
	REQUIRE(get_sales_commission(750)==45);
	REQUIRE(get_sales_commission(1100)==77);
	REQUIRE(get_sales_commission(1750)==140);
}
