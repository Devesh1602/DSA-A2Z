/*int count(vector<int>& nums, int n, int target) {
    int low = 0, high = n - 1;
    int leftIndex = -1, rightIndex = -1;
    int countFinal = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            leftIndex = mid;
            high = mid - 1;
        } else if (nums[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    low = 0;
    high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            rightIndex = mid;
            low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
	if (leftIndex == -1) return 0;
	countFinal = rightIndex - leftIndex + 1;
	return countFinal;
}
*/