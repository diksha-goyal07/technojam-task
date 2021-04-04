#include <bits/stdc++.h>
int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (auto &x : arr) {
      std::cin >> x;
    }
    int i;
    for (i = 0; i < n; i++) {
      if (arr[i] % 2 != 0) {
        break;
      }
    }
    if (i == n) {
      std::cout << "-1";
      return 0;
    }
    for (i = 0; i < n; i++) {
      if (arr[i] % 2 == 0) {
        break;
      }
    }
    if (i == n) {
      std::cout << "-1";
      return 0;
    }

    int counteven = 0;
    for (i = 0; i < n; i++) {
      if (arr[i] % 2 == 0) {
        counteven++;
      }
    }
    std::cout << counteven << std::endl;
  
}
