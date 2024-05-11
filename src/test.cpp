#include "../ext/googletest/googletest/include/gtest/gtest.h"
#include "../include/functions.h"

TEST (Suma, Prueba) 
{
    EXPECT_EQ(10, sum(5, 5));
    EXPECT_EQ(50, sum(20, 30));
}

TEST (Resta, Prueba)
{
    EXPECT_EQ(4, substract(10, 6));
}

