#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define loop(i,n) for(i=0;i<n;i++)
#define INF 1000000000

typedef long double ld;
typedef long long int ll;
typedef pair<ll,ll> pii;
typedef vector<pii> vii;

typedef vector<ll> vi;
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

bool sortsec(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    if(a.second<b.second)return a.first>b.first;
    else return (a.second>b.second);
}

const ll infinity = 1e18;

#define eb emplace_back
#define mp make_pair
#define pb push_back
#define MAX 100005
#define MAX2 1e17
#define MOD 1000000007
#define endl '\n'
ll dx[4]={-1,1,0,0};
ll dy[4]={0,0,1,-1};
#define ROW 9
#define COL 9
/**
 * soduku algo : 9*9
 * firstly check if there's a blank rest or else return to main fuction
 * if there's a blank space than:
 * if it is safe in that place
 * * put a random number that check if that leads to a solution 
 **/

#define UNASSIGNED 0
 
// N is used for the size of Sudoku grid.
// Size will be NxN
#define N 9
 
// This function finds an entry in grid
// that is still unassigned
bool FindUnassignedLocation(ll grid[N][N],
                            ll& row, ll& col);
 
// Checks whether it will be legal
// to assign num to the given row, col

bool isSafe(ll grid[N][N], ll row,
            ll col, ll num);
 
/* Takes a partially filled-in grid and attempts
to assign values to all unassigned locations in
such a way to meet the requirements for
Sudoku solution (non-duplication across rows,
columns, and boxes) */
bool SolveSudoku(ll grid[N][N])
{
    ll row, col;
 
    // If there is no unassigned location,
    // we are done
    if (!FindUnassignedLocation(grid, row, col))
        // success!
        return true;
 
    // Consider digits 1 to 9
    for (ll num = 1; num <= 9; num++)
    {
         
        // Check if looks promising
        if (isSafe(grid, row, col, num))
        {       // Make tentative assignment
            grid[row][col] = num;
 
            // Return, if success
            if (SolveSudoku(grid))
                return true;
 
            // Failure, unmake & try again
            grid[row][col] = UNASSIGNED;
        }
    }
    
    // This triggers backtracking
    return false;
}
 
/* Searches the grid to find an entry that is
still unassigned. If found, the reference
parameters row, col will be set the location
that is unassigned, and true is returned.
If no unassigned entries remain, false is returned. */
bool FindUnassignedLocation(ll  grid[N][N],
                            ll& row, ll& col)
{
    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if (grid[row][col] == UNASSIGNED)
                return true;
    return false;
}
 
/* Returns a boolean which indicates whether
an assigned entry in the specified row matches
the given number. */
bool UsedInRow(ll grid[N][N], ll row, ll num)
{
    for (ll col = 0; col < N; col++)
        if (grid[row][col] == num)
            return true;    
            
    return false;
}
 
/* Returns a boolean which indicates whether
an assigned entry in the specified column
matches the given number. */
bool UsedInCol(ll grid[N][N], ll col, ll num)
{
    for (ll row = 0; row < N; row++)
        if (grid[row][col] == num)
            return true;
    return false;
}   
bool UsedInBox(ll grid[N][N], ll boxStartRow,   
               ll boxStartCol, ll num)
{
    for (ll row = 0; row < 3; row++)
        for (ll col = 0; col < 3; col++)
            if (grid[row + boxStartRow]
                    [col + boxStartCol] == num)
                return true;
    return false;
}
bool isSafe(ll grid[N][N],ll row,ll col, ll num)
{
    return !UsedInRow(grid, row, num)
           && !UsedInCol(grid, col, num)
           && !UsedInBox(grid, row - row % 3,
                         col - col % 3, num)
           && grid[row][col] == UNASSIGNED;
}
void printGrid(ll grid[N][N])
{
    for (ll row = 0; row < N; row++)
    {
        for (ll col = 0; col < N; col++)
            cout << grid[row][col] ;
        cout << endl;
    }
}
int main()
{
//      freopen("input.txt","r",stdin);  
//    freopen("output.txt","w",stdout); 
   IOS;
   ll grid[N][N];
   for(ll i=0;i<N;i++)
   { 
       for(ll j=0;j<N;j++)
       {
           char c;cin>>c;
           if(c=='.') grid[i][j] = 0;
           else grid[i][j] = c-'0';
       }
   }
 if (SolveSudoku(grid) == true)printGrid(grid); 
    return 0;
}
