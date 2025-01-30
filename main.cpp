//*****BISMILLAHIR RAHMANIR RAHIM*****
#include <iostream>
#include <vector>
#define ll long long
#define el "\n"
#define bitcount __builtin_popcount
const int NM = 1e5 + 10;
using namespace std;

vector<vector<char>> v(3, vector<char>(3, ' '));

void DisplayBoard(int x, int y) {
    v[x][y] = 'X';
    for(int j = 0; j < 13; j++) cout<<"-";
    cout<<el;
    for (int i = 0; i < 3; i++)
    {   
        for (int j = 0; j < 3; j++)
        {
            if(j == 0) cout<<"| ";
            cout<<v[i][j]<<" | ";
        }
        cout<<el;
        for(int j = 0; j < 13; j++) cout<<"-";
        cout<<el;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    DisplayBoard(1, 1);
    char ch;
    cin>>ch;
    // DisplayBoard(1, 1);
    


return 0;
}
