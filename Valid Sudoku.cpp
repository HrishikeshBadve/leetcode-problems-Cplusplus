/*
Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:
Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
Note:
A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.
 
Example:-
Input: board = 
[["5","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]
Output: true
*/
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //Row
        for(int i=0;i<9;i++)
        {
            set<char> seen;
            for(int j=0;j<9;j++)
            {
                if(board[i][j] != '.')
                {
                    if(seen.count(board[i][j]))
                    {
                        return false;
                    }
                    seen.insert(board[i][j]);
                }
            }
        }
        
        //Column
        for(int i=0;i<9;i++)
        {
            set<char> seen;
            for(int j=0;j<9;j++)
            {
                if(board[j][i] != '.')
                {
                    if(seen.count(board[j][i]))
                    {
                        return false;
                    }
                    seen.insert(board[j][i]);
                }
            }
        }
        
        //3x3 Boxes
        for(int i=0;i<9;i+=3)
        {
            for(int j=0;j<9;j+=3)
            {
                set<char> seen;
                for(int k=i;k<i+3;k++)
                {
                    for(int l=j;l<j+3;l++)
                    {
                        if(board[k][l]!='.')
                        {
                            if(seen.count(board[k][l]))
                            {
                                return false;
                            }
                            seen.insert(board[k][l]);
                        }
                    }
                }
            }
        }
        
        return true;
    }
};
