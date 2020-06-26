#include <iostream>

using namespace std;

int main() {
	int i,T,N,n;
	cin >> T;
	for(i=0;i<T;i++){
		cin >> N;
		n = N;
		while (n > 12){
			n-=12;
		} 
		if(n==1){
			cout << N+11 << " WS\n";
		} else if(n==2){
			cout << N+9 << " MS\n";
		} else if(n==3){
			cout << N+7 << " AS\n";
		} else if(n==4){
			cout << N+5 << " AS\n";
		} else if(n==5){
			cout << N+3 << " MS\n";
		} else if(n==6){
			cout << N+1 << " WS\n";
		} else if(n==12){
			cout << N-11 << " WS\n"; 
		} else if(n==11){
			cout << N-9 << " MS\n";
		} else if(n==10){
			cout << N-7 << " AS\n";
		} else if(n==9){
			cout << N-5 << " AS\n";
		} else if(n==8){
			cout << N-3 << " MS\n";
		} else if(n==7){
			cout << N-1 << " WS\n";
		}
	}	
}
