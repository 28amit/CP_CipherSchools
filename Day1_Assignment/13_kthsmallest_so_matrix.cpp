#define T pair<int,pair<int,int>>
class Solution {
public:

    int kthSmallest(vector<vector<int>>& matrix, int k) {

        priority_queue<T, vector<T>, greater<T>> minHeap;
        int n = matrix.size();
        int ct = 0;
        if (k == (n * n)) {
            return matrix[n - 1][n - 1];
        }
        minHeap.push({matrix[0][0], {0, 0}});
        while (ct < k) {
            auto res = maxHeap.top();
            minHeap.pop();
            //cout << res.first << endl;
            ct++;

            if (ct == k) {
                return res.first;
            }
            int i = res.second.first;
            int j = res.second.second;
            if (i < n - 1) {
                i++;
                if (matrix[i][j] != INT_MAX) {
                    minHeap.push({matrix[i][j], {i, j}} );
                    matrix[i][j] = INT_MAX;
                }
                i--;
            }
            if (j < n - 1) {
                j++;
                if (matrix[i][j] != INT_MAX) {
                    minHeap.push({matrix[i][j], {i, j}} );
                    matrix[i][j] = INT_MAX;
                }
                j--;
            }
        }

        return -1;
    }
};//klog k