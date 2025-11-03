import 'dart:io';

bool solve(String s) => s
    .split("")
    .skipWhile((e) => e == "A")
    .skipWhile((e) => e == "B")
    .skipWhile((e) => e == "C")
    .isEmpty;

void main() {
  final s = stdin.readLineSync()!;
  print(solve(s) ? "Yes" : "No");
}
