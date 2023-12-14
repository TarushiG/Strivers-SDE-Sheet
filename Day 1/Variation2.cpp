// In this variation, we are essentially printing the nth row of the triangle.
#include<bits/stdc++.h> // This code only requires an input for the variable n contrary to the previous case. 
// The time complexity for this case is O(n*r), whereas the previous one had O(c) with c as the column number.
using namespace std;
int nCr(int n, int r){
	long long res = 1;
	for(int i =0; i<r; i++){
		res=res*(n-i);
		res=res/(i+1);
	}
	return res;
}
void pascalTriangle(int n){
	for(int c=1; c<=n; c++){
		cout<<nCr(n-1, c-1)<<" ";
	}
	cout<<"n"
}
int main(){
	int n=3;
	pascalTriangle(n);
	return 0;
}