#include <iostream>
using namespace std;

int main() {
	
	int j;

	do { // "do" როგორც ფუნქციის წინამდებარე სამუშაო, რაც ნიშნავს იმას, რომ მასში შეტანილი ფუნქცია დამუშავების შემდეგ გადის შემოწმებას მომავალი სამუშაოს შესახებ

		cin >> j;
		cout << "j არის: " << j << "\n";

	} while ( j != 0 ); // "while" ფუნქცია ანიჭებს პირობას, თუ რა შემთხვევაში შესრულდეს ან არ შესრულდეს "do" ფუნქცია

	// კოდი იმუშავებს მანამ, სანამ "while" ფუნქცია არ დაადგენს ჭეშმარიტ დებულებას, რათა შეაჩეროს "do" ფუნქცია
	
	return 0;
}