#include <iostream>
using namespace std;

int main() {
	
	int i=1; // ფუნქციის შემოტანა და მასზე მნიშვნელობის მიტანა ერთ ხაზში
	for (; i <= 10;) { // "for" ციკლი: კონკრეტულ ამოცანაზე ორიენტირებული
		cout << i;
		cout << " ";
		i++; // მნიშვნელობის ავტომატური ზრდადობისთვის
	}

	cout << "\n"; // ქვევით მაგალითში "for" ციკლში ერთ ხაზობრივი შინაარსია ნაჩვენები

	for (int i=1; i <= 10; i++) {
		cout << i;
		cout << " ";
	}

	cout << "\n";

	return 0;
}