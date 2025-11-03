import 'dart:io';
import 'dart:math';

void main() {
  int t = int.parse(stdin.readLineSync()!);
  for (int test = 0; test < t; test++) {
    var line = stdin.readLineSync()!.split(' ').map(int.parse).toList();
    int n = line[0], c = line[1];
    var a = stdin.readLineSync()!.split(' ').map(int.parse).toList();
    var orbitCount = List.filled(101, 0);
    for (var ai in a) orbitCount[ai]++;
    int total = 0;
    for (int i = 1; i <= 100; i++) {
      if (orbitCount[i] > 0) {
        total += min(orbitCount[i], c);
      }
    }
    print(total);
  }
}
