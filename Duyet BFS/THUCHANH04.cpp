#include <bits/stdc++.h>
#include <stdio.h>
#define maxn 1005
using namespace std;
int a[maxn][maxn];
int visited[maxn];
int n;
void ReadFile(){
	FILE *f;
	f = fopen("THUCHANH04.txt", "r");
	if(f == NULL){
		cout << "Khong doc duoc file";
	}else{
		fscanf(f, "%d", &n);
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				fscanf(f, "%d", &a[i][j]);
			}
		}
	}
}
void PrintFile(){
	cout << n << endl;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	ReadFile();
	PrintFile();
	int s;
	cout << "Nhap dinh can duyet: ";
	cin >> s;
	cout << "Ket qua BFS(" << s << ") la: ";
	queue<int> q;
	q.push(s);
	visited[s] = 1;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		cout << u << " ";
		for(int v = 1; v <= n; v++){
			if(a[u][v] == 1 && visited[v] == 0){
				q.push(v);
				visited[v] = 1;
			}
		}
	}
	return 0;
}

