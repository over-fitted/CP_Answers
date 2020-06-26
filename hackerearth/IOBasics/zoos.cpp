#include <iostream>

using namespace std;

int main() {
	char i[100];
	int c,l,a=0,b=0;
	cin >> i;			
	for(int c = 0; c<sizeof(i)/sizeof(i[0]); c++){
		if(i[c] == 'z'){
			a++;
		} else if(i[c] == 'o'){
			b++;
		} 
	}
	if(2*a == b){
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
	
}
