class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //takes 2 sorted arrays, returns median of the 2
        
        //Time Complexity: O(log(min(m,n)))
            //Binary search on smaller array
        //Space Complexity: O(1)
            //Uses fixed storage

        // Ensure nums1 is the smaller array
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int x = nums1.size();
        int y = nums2.size();
        int low = 0, high = x;

        while (low <= high) {
            int partitionX = (low + high) / 2;
            int partitionY = (x + y + 1) / 2 - partitionX;

            int maxX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
            int maxY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];

            int minX = (partitionX == x) ? INT_MAX : nums1[partitionX];
            int minY = (partitionY == y) ? INT_MAX : nums2[partitionY];

            if (maxX <= minY && maxY <= minX) {
                // We have partitioned the arrays correctly
                if ((x + y) % 2 == 0) {
                    return (double)(std::max(maxX, maxY) + std::min(minX, minY)) / 2;
                } else {
                    return (double)std::max(maxX, maxY);
                }
            } else if (maxX > minY) {
                // We are too far on the right side for partitionX. Go on the left side.
                high = partitionX - 1;
            } else {
                // We are too far on the left side for partitionX. Go on the right side.
                low = partitionX + 1;
            }
        }

        // If the input arrays are not sorted or not valid for some reason
        throw std::invalid_argument("Input arrays are not sorted or invalid.");
    }
};
