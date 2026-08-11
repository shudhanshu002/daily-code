#include <iostream>
#include <vector>
#include <string>

using namespace std;

int dx[8] = {2, 1, 1, 2, -1, -1, -2, -2};
int dy[8] = {1, 2, -2, -1, 2, -2, 1, -1};

void display(int **sol, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << (to_string(sol[i][j]) + "\t");
        }
        cout << "\n";
    }
}

bool isSafe(int x,int y,int **sol, int n) {
    return (x>=0 && x < n && y >= 0 && y<n && sol[x][y] == -1);
}

bool knightTour(int i, int j,int **sol,int n,int csf) {
    if(csf == n*n) return true;

    for(int d=0;d<9;d++) {
        int nr = i + dx[d];
        int nc = j + dy[d];
        
        
        if(isSafe(nr,nc,sol,n)) {
            sol[nr][nc] = csf;
        }
    }
}


int main() {
    int n;
    cin>> n;

    int **sol = new int*[n];

    for(int i=0;i<n;i++) {
        sol[i] = new int[n];
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            sol[i][j] = -1;
        }
    }
    sol[0][0] = 0;

    if(knightTour(0,0,sol,n,1)) {
        display(sol, n);
    } else {
        cout<< "no";
    }

    return 0;
}