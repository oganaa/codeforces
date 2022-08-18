#include<iostream>
using namespace std;

long long  n, k;
 

 
void solve() {
	cout << (n / k + 1) * k << endl;
}

int main(){
	cin >> n >> k;
	solve();
}
