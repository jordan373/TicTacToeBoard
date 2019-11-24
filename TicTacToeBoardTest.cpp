/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/* EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, unitTestName)
{
	ASSERT_TRUE(true);
}
*/

TEST(TicTacToeBoardTest, testToggleTurn) {
    TicTacToeBoard ticTacToeBoardTest;
    ASSERT_EQ(ticTacToeBoardTest.toggleTurn(), O);
    ASSERT_EQ(ticTacToeBoardTest.toggleTurn(), X);
}

TEST(TicTacToeBoardTest, testPlacePiece) {
    TicTacToeBoard ticTacToeBoardTest;
    ASSERT_EQ(ticTacToeBoardTest.placePiece(0, 0), X);
    ASSERT_EQ(ticTacToeBoardTest.placePiece(1, 0), O);
    ASSERT_EQ(ticTacToeBoardTest.placePiece(1, 0), O);
    ASSERT_EQ(ticTacToeBoardTest.placePiece(0, 4), Invalid);
}

TEST(TicTacToeBoardTest, testgetWinnerX) {
    TicTacToeBoard ticTacToeBoardTest;
    ticTacToeBoardTest.placePiece(0, 0);
    ticTacToeBoardTest.placePiece(1, 0);
    ticTacToeBoardTest.placePiece(0, 1);
    ticTacToeBoardTest.placePiece(1, 2);
    ASSERT_EQ(ticTacToeBoardTest.placePiece(0, 2), X);
    ASSERT_EQ(ticTacToeBoardTest.getWinner(), X);
}

TEST(TicTacToeBoardTest, testgetWinnerO) {
    TicTacToeBoard ticTacToeBoardTest;
    ticTacToeBoardTest.placePiece(1, 0);
    ticTacToeBoardTest.placePiece(0, 0);
    ticTacToeBoardTest.placePiece(1, 2);
    ticTacToeBoardTest.placePiece(1, 1);
    ticTacToeBoardTest.placePiece(0, 2);
    ASSERT_EQ(ticTacToeBoardTest.placePiece(2, 2), O);
    ASSERT_EQ(ticTacToeBoardTest.getWinner(), O);
}

TEST(TicTacToeBoardTest, testgetWinnerInv) {
    TicTacToeBoard ticTacToeBoardTest;
    ticTacToeBoardTest.placePiece(1, 0);
    ticTacToeBoardTest.placePiece(0, 0);
    ticTacToeBoardTest.placePiece(1, 2);
    ticTacToeBoardTest.placePiece(1, 1);
    ticTacToeBoardTest.placePiece(2, 1);
    ASSERT_EQ(ticTacToeBoardTest.placePiece(1, 0), X);
    ASSERT_EQ(ticTacToeBoardTest.getWinner(), Invalid);
}

TEST(TicTacToeBoardTest, testgetPiece) {
    TicTacToeBoard ticTacToeBoardTest;
    ticTacToeBoardTest.placePiece(1, 0);
    ticTacToeBoardTest.placePiece(0, 0);
    ticTacToeBoardTest.placePiece(1, 2);
    ticTacToeBoardTest.placePiece(1, 1);
    ticTacToeBoardTest.placePiece(0, 2);
    ASSERT_EQ(ticTacToeBoardTest.getPiece(0, 0), X);
}





