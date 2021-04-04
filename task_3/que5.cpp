#include <bits/stdc++.h>
int main() {
  int n, m;
  std::cin >> n >> m;
  std::vector<std::vector<int>> bin(m + n - 1);
  int arr[n][m];
  for (auto &x : arr) {
    for (auto &y : x) {
      std::cin >> y;
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 1; j < n; j++) {
      bin[i + j].push_back(arr[j][i]);
    }
  }
  for (int i = 1; i < bin.size(); i++) {
    for (int j = 0; j < bin[i].size(); j++) {
      std::cout << bin[i][j] << " ";
    }
    std::cout << std::endl;
  }
}