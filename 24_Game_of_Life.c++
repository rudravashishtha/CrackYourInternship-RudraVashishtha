class Solution {
public:
    bool isValidNeighbor(int x, int y, int rows, int cols) {
        return (x >= 0 && x < rows && y >= 0 && y < cols);
    }
    void gameOfLife(vector<vector<int>>& board) {
        int rows = board.size();
        int cols = board[0].size();
        vector<pair<int, int>> directions = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                int count_live = 0;

                for (const pair dir : directions) {
                    int cur_x = row + dir.first;
                    int cur_y = col + dir.second;
                    if (isValidNeighbor(cur_x, cur_y, rows, cols) && abs(board[cur_x][cur_y]) == 1)
                        count_live++;
                }

                if (board[row][col] == 1 && (count_live < 2 || count_live > 3))
                    board[row][col] = -1;

                if (board[row][col] == 0 && (count_live == 3))
                    board[row][col] = 2;
                
            }
        }

        for (int row = 0; row < board.size(); row++) {
            for (int col = 0; col < board[0].size(); col++) {
                if (board[row][col] >= 1)
                    board[row][col] = 1;
                else 
                    board[row][col] = 0;
            }
        }
    }
};
