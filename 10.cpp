#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
 srand(time(NULL));
 bool output_random = false;
 bool output_reverse = false;
 if (argc > 1) {
  for (int i=1;i<argc;++i) {
   if (argv[i] == std::string("-random")) { output_random = true; }
   if (argv[i] == std::string("-reverse")) { output_reverse = true; }
  }
 }
 if (output_random) {
  int random_number = 0;
  for (unsigned long long int j=0;j<10000000000;++j) {
   for(int i=0;i<10;++i) { random_number = rand() % 10; std::cout << random_number; }
   std::cout << "\n";
  }
 }
 else {
  if (output_reverse) {
   for (int d1=9;d1>=0;d1--) {for (int d2=9;d2>=0;d2--) {for (int d3=9;d3>=0;d3--) {for (int d4=9;d4>=0;d4--) {for (int d5=9;d5>=0;d5--) {for (int d6=9;d6>=0;d6--) {for (int d7=9;d7>=0;d7--) {for (int d8=9;d8>=0;d8--) {for (int d9=9;d9>=0;d9--) {for (int d10=9;d10>=0;d10--) {
    std::cout << d1 << d2 << d3 << d4 << d5 << d6 << d7 << d8 << d9 << d10 << "\n";
   }}}}}}}}}}
  }
  else {
   for (int d1=0;d1<10;d1++) {for (int d2=0;d2<10;d2++) {for (int d3=0;d3<10;d3++) {for (int d4=0;d4<10;d4++) {for (int d5=0;d5<10;d5++) {for (int d6=0;d6<10;d6++) {for (int d7=0;d7<10;d7++) {for (int d8=0;d8<10;d8++) {for (int d9=0;d9<10;d9++) {for (int d10=0;d10<10;d10++) {
    std::cout << d1 << d2 << d3 << d4 << d5 << d6 << d7 << d8 << d9 << d10 << "\n";
   }}}}}}}}}}
  }
 }
 return 0;
}