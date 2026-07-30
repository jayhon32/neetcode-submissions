class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = 0;
        int j = 0;
        int count = m;   
        while (i < count && j < n) {

            if (nums2[j] < nums1[i]) {

                for (int k = count - 1; k >= i; k--) {
                    nums1[k + 1] = nums1[k];
                }

                nums1[i] = nums2[j];
                count++;   
                j++;
                i++;
            }
            else {
                i++;
            }
        }

        
        while (j < n) {
            nums1[count] = nums2[j];
            count++;
            j++;
        }
    }
};