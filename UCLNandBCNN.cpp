#include <bits/stdc++.h>
using namespace std; 
long long gcd(long long a, long long b){
	while(b != 0){
		long long temp = a;
		a = b;
		b = temp % b; 
	} 
	return a; 
} 

long long lcm(long long a, long long b){
	return a / gcd(a, b) * b; 
} 
using namespace std;
int main(){
	long long a, b;
	cin >> a >> b; 
	cout << gcd(a, b) << " " << lcm(a, b); 
	return 0; 
} 
