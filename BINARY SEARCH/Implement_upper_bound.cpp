/*int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==x) return mid+1;
		else if(arr[mid]<x) low=mid+1;
		else high=mid-1;
	}
}
The upper bound algorithm finds the first or the smallest index in a sorted array, 
where the value at that index is greater than the given key i.e. x.
The upper bound is the smallest index, ind, where arr[ind] > x.
*/