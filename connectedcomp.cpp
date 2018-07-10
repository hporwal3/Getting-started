#include <iostream>
using namespace std;
void inputMat(char mat[][100], int m, int n){
    for(int r = 0; r < m; ++r){
        for(int c = 0; c < n; ++c){
            cin >> mat[r][c];
        }
    }
}
void outputMat(char mat[][100], int m, int n){
    cout << "\n-----MAT Begins----\n";
    for(int r = 0; r < m; ++r){
        for(int c = 0; c < n; ++c){
            cout << mat[r][c] << " ";
        }
        cout << endl;
    }
    cout << "-----MAT Ends------\n";
}

int connectedComponenets(char board[][100], int m,int n){
    bool visited;
    int connections=0;
    for(int x=0;x<m;x++)
        {
            for(int y=0;y<n;y++)
            {
             if(board[x][y]==X)
                {connections++;
                    {
                        if (board[x-1][y]==X || board[x][y-1]==X || board[x+1][y]==X || board[x][y+1]==X)
                    }
                

            }
        }


  
}

int main(){
    char board[100][100];
    int m, n;
    cin >> m >> n;
    inputMat(board, m, n);
    outputMat(board, m, n);
    int ans = connectedComponenets(board, m,n);
    cout << ans;   
}