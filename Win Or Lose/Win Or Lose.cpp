#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> input) {
	for (int value : input) {
		cout << value << ", ";
	}
	cout << "\n";
}
int detect_winlose(const vector<int>& a, int k, int n) {
	for (int i = 1; i <= n; i++) {
		if (a[k + i] == -1) {
			return 1;
		}
	}
	return -1;
}
vector<int> build_win_lose_status(int n, int m) {
	vector<int> output(m + 1, 2);
	output[m] = -1;
	for (int i = m - 1; i >= 0; i--) {
		output[i] = detect_winlose(output, i, n);
	}
	return output;
}
int main()
{
	print(build_win_lose_status(5, 21));
}