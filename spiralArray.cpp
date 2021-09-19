//Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> vec;
        int top = 0;
        int bottom = r-1;
        int right = c - 1;
        int left = 0;
        while(left <= right && top <= bottom){
            for(int i = left; i <= right; i++){
                vec.push_back(matrix[top][i]);
            }
            top++;
            for(int i = top; i <= bottom; i++){
                vec.push_back(matrix[i][right]);
            }
            right--;
            if(top <= bottom){
                for(int i = right; i >= left; i--){
                    vec.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left <= right){
                for(int i = bottom; i >= top; i--){
                    vec.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return vec;
    }
