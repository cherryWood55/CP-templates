//Breadth First Search
#include <bits/stdc++.h>
using namespace std;
int n;
int m;
vector<int> graph[100];
//max 100 vertices, edge list is represented by vector<int>
void addEdge(int x, int y){
	graph[x].push_back(y);
	graph[y].push_back(x);
}
void printGraph(){
	cout << "How the graph looks like : " << endl;
	for(int i=0; i<n; i++){
		cout << "For " << i+1 << " : ";
		for(auto j:graph[i]){
			cout << j+1 << " ";
		}
		cout << endl;
	}
}
void BFS(int source){
	cout << "The results obtained from the BFS:" << endl;
	queue<int> Q;
	int level[n], parent[n];
	//Initialization
	for(int i=0; i<n; i++){
		level[i]=-1;
		parent[i]=-1;
	}
	//Start the exploration at source, set level[source] to 0
	Q.push(source);
	level[source]=0;
	//Explore each vertex in Q, increment level for each vertex
	while(!Q.empty()){
		//Extract the head of the queue
		int j = Q.front();
		int curr_level=level[j];
		Q.pop();
		//For each edge in the edge list
		for(auto k:graph[j]){
			if(level[k]==-1){
				level[k]=1+curr_level;
				parent[k]=j;
				Q.push(k);
			}
		}
	}

	//let's say we have to compute the shortest path to every vertex from the source vertex - level[] does that job
	//suppose we also want to see from which vertex is a particular vertex discovered -  this is given by the parent[]
	for(int i=0; i<n; i++){
		cout << "Parent of " << i+1 << " is " << parent[i]+1 << endl;
		cout << "Shortest Path to Vertex " << i+1 << " : " << level[i] << endl;
	}
	cout << endl;
}
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif
	int x, y;
	cin >> n;//number of vertices
	cin >> m;//number of edges
	for(int i=0; i<m; i++){
		cin >> x >> y;
		x--;
		y--;
		//adding an edge in an undirected graph
		addEdge(x, y);
	}
	//printing the graph
	printGraph();
	//start the BFS from source vertex 0
	int source=0;
	BFS(source);
}