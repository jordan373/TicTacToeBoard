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

TEST(TicTacToeBoardTest, testToggleTurnO) {
    TicTacToeBoard ticTacToeBoardTest;
    ASSERT_EQ(ticTacToeBoardTest.toggleTurn(), O);
}

TEST(TicTacToeBoardTest, testToggleTurnX) {
    TicTacToeBoard ticTacToeBoardTest;
    ASSERT_EQ(ticTacToeBoardTest.toggleTurn(), O);
    ASSERT_EQ(ticTacToeBoardTest.toggleTurn(), X);
}

TEST(TicTacToeBoardTest, testPlacePiece) {
TicTacToeBoard ticTacToeBoardTest;
ASSERT_EQ(ticTacToeBoardTest.placePiece(0, 0), O);
}
