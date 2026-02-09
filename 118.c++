class Solution {
public:
    vector<vector<int>> generate(int numrows) {
        vector<vector<int>>triangle ;
        for(int i=0; i<numrows; i++){
            long long val =1;
            vector<int> row;
            for(int j=0; j<=i; j++){
                row.push_back(val);
                val = val*(i-j) / (j+1);
            }
            triangle.push_back(row);
        }
        return triangle;
    }
};
