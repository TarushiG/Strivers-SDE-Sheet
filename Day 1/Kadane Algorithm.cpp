#include<iostream>
#include<climits>
using namespace std;
long long kadaneAlgorithm(int arr[], int n){ 
	long long maxi = LONG_MIN;
	long long sum = 0;
	for(int i = 0; i<n; i++){
		sum += arr[i];
		if(sum>maxi){
			maxi = sum;
		}
		if(sum<0){
			sum = 0;
		}
	}
	return maxi;
}
int main(){
	int n;
	cout<<"Enter the array size: ";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements: \n";
	for(int i=0; i<n; i++){
		cout<<"Element "<<i+1<<": ";
		cin>>arr[i]
	}
	long long maxSum = kadaneAlgorithm(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}