class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> Result;

        for(int i = 0; i < numRows; i++){
            vector<int> row(i + 1, 1);

            for(int j = 1; j < i; j++){
                row[j] = Result[i-1][j-1] + Result[i-1][j];
            }

            Result.push_back(row);
        }

        return Result;
    }
};
