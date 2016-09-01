#include <iostream>
#include <algorithm>
using namespace std;

//finds highest revenue using recursion
int cut_rod_recursion(int p[], int n){
		if(n==0){
			return 0;
		}
		int q = -1;
		for(int i=0;i<n;i++){
			q = max(q, p[i]+cut_rod_recursion(p,n-(i+1)));
		}
		return q;
}

int main(void) {
	int p[4] = {1,5,8,9};
	cout<<cut_rod_recursion(p,4);
	return 0;
}

