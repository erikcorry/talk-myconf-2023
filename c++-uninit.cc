// Uninitialized locals should be zeroed:   https://wg21.link/P2723R1

// This would mitigate or fix around 10% of security issues in security-
// relevant code bases.

int main() {
  int x;
  char b[100];

  if (predicate()) {
    x = 1;
    memset(b, 0, sizeof(b));
  }

  bar(b);

  return x;
}
