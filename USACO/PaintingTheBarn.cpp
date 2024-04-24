#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<string>
using namespace std;

const int TAMANO = 1000;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main(){
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	setIO("paintbarn");
	int N, K;
	cin>>N>>K;
	vector<vector<int>> board(TAMANO+1,vector<int>(TAMANO+1,0));
	for(int i=0;i<N;i++){
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		board[x1][y1]++;
		board[x1][y2]--;
		board[x2][y1]--;
		board[x2][y2]++;
	}
	int counter=0;
	for(int y=0;y<TAMANO;y++){
		for(int x=0;x<TAMANO;x++){
			if (x > 0) board[y][x] += board[y][x - 1];
			if (y > 0) board[y][x] += board[y - 1][x];
			if (x > 0 && y > 0) board[y][x] -= board[y - 1][x - 1];
			counter += board[y][x] == K;
		}
	}
	cout<<counter<<endl;
	return 0;
}