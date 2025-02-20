class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            int n = nums.size();
            int finalshift = k % n; // To handle cases where k >= n
            if (finalshift == 0) return;
    
            vector<int> temp(finalshift); // Dynamic array instead of fixed size
            for (int i = 0; i < finalshift; i++) {
                temp[i] = nums[n - finalshift + i]; // Store last `finalshift` elements
            }
    
            for (int i = n - 1; i >= finalshift; i--) {
                nums[i] = nums[i - finalshift]; // Shift elements to the right
            }
    
            for (int i = 0; i < finalshift; i++) {
                nums[i] = temp[i]; // Place stored elements at the beginning
            }
    
        }
    };