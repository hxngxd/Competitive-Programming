#include <iostream>
#include <fstream>

#define fo "FIBO.OUT"

using namespace std;

int main() {
	fstream f(fo, ios::out);
	f << 10;
	f.close();
	
	
}
