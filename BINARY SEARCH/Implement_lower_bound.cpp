/*
The lower bound algorithm finds the first or the smallest index in a sorted array,
where the value at that index is greater than or equal to a given key i.e. x.
The lower bound is the smallest index, ind, where arr[ind] >= x. 
But if any such index is not found, the lower bound algorithm returns n i.e. size of the given array.
int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==x) return mid;
		else if(arr[mid]<x) low=mid+1;
		else high=mid-1;

	}
}
*/