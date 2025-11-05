bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    char nums[100];
    sprintf(nums, "%d", x);

    int left = 0;
    int right = strlen(nums) - 1;
    
    while (left < right) {
        if (nums[left] != nums[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}