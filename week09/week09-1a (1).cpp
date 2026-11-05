// week09-1a.cpp 學習計畫 Matrix 第2題
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N = mat.size(); // 取得矩陣大小
        int ans = 0; // 初始化總和
        for (int i=0; i<N; i++) { // 外層迴圈
            for (int j=0; j<N; j++) { // 內層迴圈走訪所有元素
                if (i==j || i+j==N-1) ans += mat[i][j]; // 判斷是否為主對角線或副對角線上的元素並相加
            }
        }
        return ans; // 回傳對角線總和
    }
};
