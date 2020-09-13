#include "../src/functions.h"
#define CATCH_CONFIG_MAIN
#include "../thirdparty/catch/catch.hpp"

TEST_CASE("All bulls are guessed")
{
    int N = 4;
    int bull, cow;
    int A[4] = {1, 2, 3, 4};
    int B[4] = {1, 2, 3, 4};
    AnswerCheck(A, B, bull, cow, N);
    int expected_bull = 4;
    int expected_cow = 0;
    REQUIRE(expected_bull == bull);
    REQUIRE(expected_cow == cow);
}

TEST_CASE("All cows are known")
{
    int N = 4;
    int bull, cow;
    int A[4] = {1, 2, 3, 4};
    int B[4] = {3, 1, 4, 2};
    AnswerCheck(A, B, bull, cow, N);
    int expected_bull = 0;
    int expected_cow = 4;
    REQUIRE(expected_bull == bull);
    REQUIRE(expected_cow == cow);
}

TEST_CASE("Half cows are known and half bulls are guessed")
{
    int N = 4;
    int bull, cow;
    int A[4] = {1, 2, 3, 4};
    int B[4] = {1, 2, 4, 3};
    AnswerCheck(A, B, bull, cow, N);
    int expected_bull = 2;
    int expected_cow = 2;
    REQUIRE(expected_bull == bull);
    REQUIRE(expected_cow == cow);
}

TEST_CASE("Half bulls are guessed")
{
    int N = 4;
    int bull, cow;
    int A[4] = {1, 2, 3, 4};
    int B[4] = {1, 2, 5, 6};
    AnswerCheck(A, B, bull, cow, N);
    int expected_bull = 2;
    int expected_cow = 0;
    REQUIRE(expected_bull == bull);
    REQUIRE(expected_cow == cow);
}

TEST_CASE("Half cows are known")
{
    int N = 4;
    int bull, cow;
    int A[4] = {1, 2, 3, 4};
    int B[4] = {2, 1, 5, 6};
    AnswerCheck(A, B, bull, cow, N);
    int expected_bull = 0;
    int expected_cow = 2;
    REQUIRE(expected_bull == bull);
    REQUIRE(expected_cow == cow);
}

TEST_CASE("Not a single number was guessed")
{
    int N = 4;
    int bull, cow;
    int A[4] = {1, 2, 3, 4};
    int B[4] = {5, 6, 7, 8};
    AnswerCheck(A, B, bull, cow, N);
    int expected_bull = 0;
    int expected_cow = 0;
    REQUIRE(expected_bull == bull);
    REQUIRE(expected_cow == cow);
}
