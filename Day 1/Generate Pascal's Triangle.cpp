vector<int> generateRow(int row){
	long long ans = 1;
	vector<int> ansRow;
	ansRow.push_back(1)
	for(int col=1; col<row; col++){
		ans = ans*(row-col);
		ans = ans/(col);
		ansRow.push(ans);
	}
	return ansRow;
}
vector<vector<int>> pascalTriangle(int N){
	vector<vector<int>> ans;
	for(int i=1; i<=N; i++){
		ans.push_back(generateRow(i));
	}
	return ans;
}