class Solution {
public:
    bool solve(vector<vector<char>>& board, string &word,int index,int i,int j)
    {
        if(i>=board.size()|| j>=board[0].size())
            return false;
       
        if(board[i][j]!=word[index])
                    return 0; 
       
         if(index==word.size()-1)
            return true;  
         board[i][j]='$'; 
        // if(board[i][j]==word[index])
        {
            if(solve(board,word,index+1,i+1,j))
                return true;
            
            if(solve(board,word,index+1,i-1,j))
                return true;
            
            if(solve(board,word,index+1,i,j-1))
                return true;
            
            if(solve(board,word,index+1,i,j+1) )
                return true;
        }
        
//             
       board[i][j]=word[index]; 
            
        return 0;
            // return   ||  |||| ;            
        // return solve(board,word,0,i+1,j) || solve(board,word,0,i-1,j) ||solve(board,word,0
            ,i,j+1) || solve(board,word,0,i,j-1);            
        
  
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        int n=board.size();
        int m=board[0].size();
        // int arr[n][m];
    
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
        {
            
            if(board[i][j]==word[0] && solve(board,word,0,i,j))
                return true;
        }
        }
        
        
        return 0;
    }
        
};
