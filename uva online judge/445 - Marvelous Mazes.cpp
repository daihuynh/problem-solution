#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

#define FOR(i, L, U) for(int i=(int)L; i<=(int)U; i++)
#define FORD(i, U, L) for(int i=(int)U; i>=(int)L; i--)

#define READ(x) freopen(x, "r", stdin)
#define WRITE(x) freopen(x, "w", stdout)

#define PQ priority_queue
#define PB push_back
#define SZ size()
#define ff first
#define ss second

#define EPS 1e-9
#define SQR(x) ((x)*(x))
#define INF 99999999

#define ALL_BITS ((1 << 31) - 1)
#define NEG_BITS(mask) (mask ^= ALL_BITS)
#define TEST_BIT(mask, i) (mask & (1 << i))
#define ON_BIT(mask, i) (mask |= (1 << i))
#define OFF_BIT(mask, i) (mask &= NEG_BITS(1 << i))

typedef long long LL;
typedef vector<char> VC;
typedef vector<vector<char> > VVC;
typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef vector< vector<bool> > VVB;
typedef pair<int, int> PII;
typedef map<int, int> MII;
typedef map<char, int> MCI;
typedef map<string, int> MSI;

void print(int rep, char ch){
    FOR(i,1,rep)printf("%c",ch);
}
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    string line;
    int rep,length;
    while(getline(cin,line)){

        if((length=line.length()==0)){printf("\n");continue;}

        rep = 0;
        FOR(i,0,line.length()-1){

            if(line[i]>='0'&& line[i]<='9'){
                rep += line[i] - '0';
            }
            else if(line[i]>='A'&& line[i]<='Z'){
                print(rep,line[i]);
                rep = 0;
            }
            else if(line[i]=='b'){
                print(rep,' ');
                rep = 0;
            }
            else if(line[i]=='*'){
                print(rep,'*');
                rep = 0;
            }
            else if(line[i]=='!'){
                printf("\n");
            }
        }
        printf("\n");

    }

  return 0;
}
