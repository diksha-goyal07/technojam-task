#include <bits/stdc++.h>
int main() {
  int n;
  std::cin >> n;
  int arr[n];
  for (auto &x : arr) {
    std::cin >> x;
  }
  int count[4] = {0};
  for (int i = 0; i < n; i++) {
    int rem = arr[i] % 4;
    count[rem]++;
  }
  int bin = count[0] + count[2] / 2;
  count[2] = count[2] - (count[2] / 2) * 2;
  int mi = std::min(count[1], count[3]);
  int ma = std::max(count[1], count[3]);
  bin += mi;
  count[1] = count[1] - mi;
  count[3] = count[3] - mi;
  ma = ma - mi;
  bin += count[1] / 4 + count[3] / 4;
  ma = ma - (ma / 4) * 4;

  if (ma / 2 == count[2]) {
    bin += count[2];
  }
  std::cout << bin << std::endl;
}