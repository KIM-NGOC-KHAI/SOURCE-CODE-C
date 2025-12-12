#include <bits/stdc++.h>
#include <stdio.h>
#define maxn 1000000007
using namespace std;
int a[maxn][maxn];
int visited[maxn];
int n;
// ham doc file
void ReadFile(){
	FILE *f;
	f = fopen("THUCHANH03.txt", "r");
	if(f == NULL){
		cout << "Khong the doc file";
	}else{
		fscanf(f, "%d", &n);
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				fscanf(f, "%d", &a[i][j]);
			}
		}
	}
}
// Ham in file
void PrintFile(){
	cout << n << endl;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j];
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
	cout << "Ket qua DFS(" << s << ") la: ";
	stack<int> st;
	st.push(s);
	while(!st.empty()){
		int kq = st.top();
		st.pop();
		if(visited[kq] == 0){
			cout << kq << " ";
			visited[kq] = -1;
			for(int v = n; v >= 1; v--){
				if(a[kq][v] == 1 && visited[v] == 0){
					st.push(v);
				}
			}
		}
	}
	return 0;
}
