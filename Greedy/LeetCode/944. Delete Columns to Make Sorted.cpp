/*
** Runtime: 92 ms, faster than 5.39% of C++ online submissions for Delete Columns to Make Sorted.
*  Memory Usage: 12.6 MB, less than 49.51% of C++ online submissions for Delete Columns to Make Sorted.
*/

class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int count = 0;
        for(int i=0; i< A[0].length(); i++) {
             for(int j=0; j < A.size() - 1; j++) {
                 if(A[j][i] > A[j+1][i]) {
                     count++;
                     break;
                 }
             }
        }
        return count;
    }
};
