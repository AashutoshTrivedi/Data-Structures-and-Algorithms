#include <iostream>
#include<vector>
#include<random>
#include<time.h>
#include<string>
#include <bits/stdc++.h>
using namespace std;

class TicTacToe
{
public:
    char userMarker;
    char aiMarker;
    char winner;
    char currentMarker;
    vector<char> board;
    TicTacToe(char playerToken, char aiMarker)
    {
        userMarker = playerToken;
        aiMarker = aiMarker;
        winner = '-';
        board = setBoard();
        currentMarker = userMarker;
    }

    vector<char> setBoard()
    {
        vector<char> boards;
        boards.resize(9);
        for (int i=0; i < 9; i++)
        {
            boards[i] = '-';
        }
        return boards;
    }

    void printBoard()
    {
        for(int i=0;i<9 ;i++)
        {
            if (i%3 == 0 && i!=0)
            {
                cout<<"|"<<endl;;
                cout<<"-------"<<endl;
            }
            cout<<"|"<<board[i];
        }
        cout<<"|\n"<<endl;;
    }

    void printIndeBoard()
    {
        for(int i=0;i<9;i++)
        {
            if (i%3 == 0 && i!=0)
            {
                cout<<"|"<<endl;
                cout<<"-------"<<endl;
            }
            cout<<"|" << i+1 ;
        }
        cout<<"| \n"<<endl;
    }

    bool playTurn(int spot)
    {
       bool isValid = withinRange(spot) && !isspotTaken(spot);
       if(isValid)
       {
           board[spot-1] = currentMarker;
           currentMarker = (currentMarker==userMarker) ? aiMarker : userMarker;
       }
       return isValid;
    }

    //check of spot is in range

    bool withinRange(int number)
    {
        return number >0 && number<board.size()+1;
    }

    bool isspotTaken(int number)
    {
        return board[number-1] != '-';
    }

    bool isThereAWinner()
    {
        bool diagonalsAndMiddles = (rightDi() || leftDi() || middleRow() || secondCol()) && board[4] != '-';
        bool topAndFirst = (topRow() || firstCol())  && board[0] != '-';
        bool bottomAndThird = (bottomRow() || thirdCol()) && board[8] != '-';
        if(diagonalsAndMiddles)
            {
                winner = board[4];
            }
        else if(topAndFirst)
            {
                winner = board[0];
            }
        else if(bottomAndThird)
            {
                winner = board[8];
            }
        return diagonalsAndMiddles || topAndFirst|| bottomAndThird;
    }

    bool topRow()
        {
            return board[0] == board[1] && board[1] == board[2];
        }
    bool middleRow()
        {
            return board[3] == board[4] && board[4] == board[5];
        }
    bool bottomRow()
        {
            return board[6] == board[7] && board[7] == board[8];
        }
    bool firstCol()
        {
            return board[0] == board[3] && board[3] == board[6];
        }
    bool secondCol()
        {
            return board[1] == board[4] && board[4] == board[7];
        }
    bool thirdCol()
        {
            return board[2] == board[5] && board [5] == board [8];
        }
    bool rightDi()
        {
            return board[0] == board[4] && board[4] == board[8];
        }
    bool leftDi()
        {
            return board[2] == board[4] && board[4] == board[6];
        }
    bool isTheBoardFilled()
        {
            for(int i =0; i< board.size(); i++)
                {
                    if( board[i] == '-')
                    {
                        return false;
                    }
                }
        }

    string gameOver()
    {
        bool didSomeoneWin = isThereAWinner();
        if(didSomeoneWin)
        {
            string init = "We have a winner! The winner is  ";
            string win(1,winner);
            return init.append(win);
        }
        else if(isTheBoardFilled())
        {
            cout<<"go";
            return "Game Draw";

        }
        else
        {
            return "notOver";
        }
    }
};


class AI
{
public:
     int pickSpot(TicTacToe game)
     {
         vector<int> choices;
         for(int i = 0; i < 9; i++)
         {
             //if slot is not taken add it as a choice
             if(game.board[i] == '-')
             {
                 choices.push_back(i+1);
             }
         }
         srand(time(0));
         int choice = choices.at( rand() %choices.size());
         return choice;
     }
};

int main()
{
/*
    char playerToken = 'X';
    char opponentToken = 'O';
    TicTacToe game(playerToken,opponentToken);
    game.printBoard();
    AI a;
    a.pickSpot(game);
*/
    bool doYouWantToPlay = true;
    while(doYouWantToPlay)
    {
        cout<<"Welcome, Lets get your hands dirty on TICTACTOE \n";
        cout<<"Enter a char to represent you\n";
        char playerToken ;
        cin >> playerToken;
        cout<<"Enter oppo char\n";
        char opponentToken;
        cin>> opponentToken;
        TicTacToe game(playerToken, opponentToken);
        AI ai;

        // set up the game
        game.printIndeBoard();
        cout<<"Now we can start the game. Enter a number and your token should be put in its place."<<endl;
        //lets play
        while(game.gameOver() == "notOver")
        {if (game.currentMarker == game.userMarker)
        {
            cout<<"Its your turn enter a spot for your token"<<endl;
            int spot;
            cin>>spot;
            while(!game.playTurn(spot))
            {
                cout<<"try again, this spot is already taken"<<endl;
                cin>>spot;
            }
            cout<<"You picked "<<spot<<endl;


        }
        else
        {
            //AI turn
            cout<<"its my turn"<<endl;
            int aiSpot;
            aiSpot = ai.pickSpot(game);
            game.playTurn(aiSpot);
            cout<<"I picked up "<< aiSpot <<endl;
        }
        cout<<"\n"<<endl;
        game.printBoard();
        }
        cout<<game.gameOver()<<endl;
        cout<<"Do you want to play more, do Y for yes";
        char a;
        cin>>a;
        doYouWantToPlay = (a == 'Y');

    }
    return 0;


}
