#include "../src/functions.h"
#define CATCH_CONFIG_MAIN
#include "../thirdparty/catch/catch.hpp"

TEST_CASE("All bulls are guessed")
{
    int N = 4;
    int bull, cow;
    int A[4] = {4, 5, 7, 8};
    int B[4] = {4, 5, 7, 8};
    AnswerCheck(A, B, bull, cow, N);
    int expected_bull = 4;
    int expected_cow = 0;
    REQUIRE(expected_bull == bull);
    REQUIRE(expected_cow == cow);
}
