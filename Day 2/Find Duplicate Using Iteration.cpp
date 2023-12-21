#include<bits/stdc++.h>

using namespace std;
int findDuplicate(vector <int> & arr){
	int n = arr.size();
	sort(arr.begin(), arr.end());
	for(int i = 0; i<n; i++){
		if (arr[i] = arr[i+1]){
		    return arr[i];
	    }
    }
}
int main(){
	cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the array elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int duplicate = findDuplicate(arr);

    if (duplicate != -1) {
        cout << "The duplicate element is " << duplicate << endl;
    } else {
        cout << "No duplicate element found." << endl;
    }

    return 0;
}