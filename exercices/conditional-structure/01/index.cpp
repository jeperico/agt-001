#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


void solve() {
    float value;
    cin >> value;

    if (!(value <= 1 || value >= 9)) cout << "O valor está na faixa permitida" << endl;
    else cout << "O valor está fora da faixa permitida" << endl;
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  solve();
  return 0;
}
