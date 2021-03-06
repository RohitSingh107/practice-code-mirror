#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  

using namespace std;




bool isValid(int x, int y, int cX, int cY){
	return x > 0 and y > 0 and x <= cX and y <= cY;
}

vector<pair<int,int>> movements = {
	{-1, 2}, {1, 2},
	{2, -1}, {2, 1},
	{1, -2}, {-1, -2},
	{-2, -1}, {-2, 1}
};

int bfs(int sourceX, int sourceY, int destX, int destY, int cX, int cY){

	// const int N= 505;

	// int visited[cX][cY];
	// int level[cX][cY];
	/* vector<vector<int>> visited(cY +1, vector<int>(cX + 1)); */
	/* vector<vector<int>> level(cY + 1, vector<int>(505 + 1)); */
	vector<vector<int>> visited(5050 +1, vector<int>(505 + 1));
	vector<vector<int>> level(505 + 1, vector<int>(505 + 1));


	
	if(sourceX == destX and sourceY == destY){
		return 0;
	}
	
	// for(int i = 0; i < N; i++){
	// 	for(int j = 0; j < N; j++){
	// 		visited[i][j] = 0;
	// 		level[i][j] = 0;
	// 	}
	// }

	queue<pair<int, int>> q;

	q.push({ sourceX, sourceY });
	visited[sourceX][sourceY] = 1;

	while (!q.empty()) {
		auto parent = q.front();
		int parentX = parent.first;
		int parentY = parent.second;

		/* std::cout << parentX  << " " << parentY << std::endl; */
		if(parentX == 5 and parentY == 5) std::cout << "here 1" << std::endl;

		visited[parentX][parentY] = 1;

		q.pop();

		if(parentX == 5 and parentY == 5) std::cout << "here 2" << std::endl;

		for(auto p : movements){
			if(parentX == 5 and parentY == 5) std::cout << "here 3" << std::endl;
			/* pair<int,int> child = {parentX + p.first, parentY + p.second}; */
			int childx = parentX + p.first;
			int childy = parentY + p.second;
			
			if(!isValid(childx, childy, cX, cY)) continue;
			if(visited[childx][childy]) continue;

			q.push({ childx, childy });
			level[childx][childy] = level[parentX][parentY] + 1;
			if(parentX == 5 and parentY == 5) std::cout << "here 4" << std::endl;
		}

		if(level[destX][destY] != 0){
			break;
		}
	}
	int ans = -1;
	
	if(level[destX][destY] != 0){
		ans = level[destX][destY];
	}

	return ans;
}

int knight(int A, int B, int C, int D, int E, int F) {
	return bfs(C, D, E, F, A, B);
}



int32_t main(){
	clock_t _t = clock();

	std::cout << knight(384, 387, 106, 134, 210, 35) << std::endl;	

	cerr << "Run Time: " << (double)(clock() - _t) / CLOCKS_PER_SEC << " seconds";
	return 0;
}


