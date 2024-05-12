#include <iostream>
using namespace std;

int main() g++ file.cpp -o output./output{
  ios_base::sync_with_stdio(false);
  int amount1, amount2;
  cin >> amount1 >> amount2;

  if (amount1 > amount2) {
    cout << "Lisu\n";
  } else if (amount1 < amount2) {
    cout << "navya\n";
    return 0;
  } else {
    cout << "bhaichara on top\n";
  }
}
