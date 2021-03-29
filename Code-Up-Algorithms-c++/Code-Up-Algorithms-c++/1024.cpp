#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int i = 0;
	char a[50];
	scanf("%s", &a);
	while(a[i] != '\0') {
		cout << "\'" << a[i] << "\'"<<endl;
		i++;
	}
	return 0;
}