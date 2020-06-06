#include <bits/stdc++.h>

using namespace std;

void decode(){
	int g1, g2;
	cin >> g1 >> g2;
	cout << max(g1, g2) << " " << g1 + g2 << "\n";
}
int main(){
   	ios::sync_with_stdio(false);
   	cin.tie(0);
   	int t;
   	cin >> t;
   	while (t--)
   		decode();
    return 0;
}
