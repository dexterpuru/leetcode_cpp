#include <vector>
using namespace std;

class Solution {
 public:
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int median_index = (nums1.size() + nums2.size()) / 2;
    vector<int> median_indexes = {};
    if (median_index * 2 != nums1.size() + nums2.size()) {
      median_indexes = {median_index, median_index};
    } else {
      median_indexes = {median_index - 1, median_index};
    }

    vector<int> one_vector = {};
    int index1 = 0;
    int index2 = 0;
    for (int i = 0; i < nums1.size() + nums2.size(); i++) {
      if (index1 == nums1.size()) {
        one_vector.insert(one_vector.end(), nums2.begin() + index2,
                          nums2.end());
        break;
      } else if (index2 == nums2.size()) {
        one_vector.insert(one_vector.end(), nums1.begin() + index1,
                          nums1.end());
        break;
      } else {
        if (nums1[index1] <= nums2[index2]) {
          one_vector.push_back(nums1[index1]);
          index1++;
        } else if (nums2[index2] < nums1[index1]) {
          one_vector.push_back(nums2[index2]);
          index2++;
        }
      }
    }

    return ((double)one_vector[median_indexes[0]] +
            (double)one_vector[median_indexes[1]]) /
           2;
  }
};
