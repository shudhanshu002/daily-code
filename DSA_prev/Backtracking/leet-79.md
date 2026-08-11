```cpp
class Solution {
public:
    vector<vector<int>> dir = {{1,0}, {-1,0} , {0,1}, {0,-1}};

    bool check(vector<vector<char>>& board, string word,int i,int j,int idx) {
        if(idx == word.length()) return true;
        if(i<0 || j<0 || i>=board.size() || j>=board[i].size() || word[idx] != board[i][j]) return false;

        int ch = board[i][j];
        board[i][j] = '$';

        for(int k=0;k<4;k++){
            int nr = i + dir[k][0];
            int nc = j + dir[k][1];
            bool c = check(board,word,nr,nc,idx+1);
            if(c) return true;
        }
        board[i][j] = ch;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(check(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }
};
```