// Given an m x n grid of characters board and a string word, return true if word exists in the grid.

// The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int i,j;
        int m = board.size();
        int n = board[0].size();
        int index = 0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(board[i][j] == word[index])
                {
                if(search(board, word, i,j,index,m,n))
                return true;
                }
                
            }
        }
     return false;
    }

    bool search(vector<vector<char>>& board, string word, int row, int col, int index, int m, int n)
    {
        if(index == word.length())
        return true;

        if(row < 0 || col < 0 || row >= m || col >= n || board[row][col] == '!' || board[row][col] != word[index])
           return false;

        char c = board[row][col];
        board[row][col] = '!';

        bool right = search(board, word, row, col+1, index+1, m, n);

        bool left = search(board, word, row, col-1, index + 1, m, n);

        bool top = search(board, word, row - 1, col, index + 1, m, n);

        bool down = search(board, word, row + 1, col, index + 1, m, n);

        board[row][col] = c;

        return right||left||top||down;

    }
};