// "sleepTimer"
// Essential libraries
#include <iostream>
#include<windows.h>
// #include<>
// #include <bits/stdc++.h>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <map>
// #include <set>
// #include <cmath>
// #include <queue>
// Additional libraries
// #include <stack>
// #include <array>
// #include <unordered_map>
// #include <unordered_set>
using namespace std;
// #define debug(x) cout << "\n"<<  #x  << " : " << x << endl;
// Operator overloads

void loop_trail() {
	for (int i = 0 ; i < 100; i++)
		cout << i << " ";
	cout << "\n";
}

void sleeping() {
	Sleep(5000);
}
int main(int argc, char const* argv[]) {
	// Faster I/O operations
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << "starting Server \n";

	loop_trail();

	cout << "sleep Function call \n";
	for (int i = 0; i < 10; i++) {
		cout << i << " ";
	}
	cout << "\n";
	// Main function code here
	// int t = 1;
	// cin >> t;
	// while (t--) {solve();}

	cout << "Local Server started \n";

	sleeping();
	return 0;
}
