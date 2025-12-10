#include <bits/stdc++.h>
const int maxn = 1000000 + 7;
bool prime[maxn]; 
using namespace std;
void sang(int n){
	for(int i = 0; i <= n; i++){
		prime[i] = true; 
	} 
	prime[0] = prime[1] = false;
	for(int i = 2; i <= sqrt(n); i++){
		if(prime[i] == true){
			for(int j = i * i; j <= n; j += i){
				prime[j] = false; 
			} 
		} 
	} 
} 
int main(){
	int n;
	cin >> n;
	sang(n); 
	for(int i = 0; i <= n; i++){
		if(prime[i] == true){
			cout << i << " "; 
		} 
	} 
	return 0; 
} 
