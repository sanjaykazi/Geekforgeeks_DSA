 vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> v;
        int i = 0, j = 0;
        while(i < n && j < m){
            if(i > 0 && arr1[i] == arr1[i-1]){
                i++;
                continue;
            }
            if(j > 0 && arr2[j] == arr2[j-1]){
                j++;
                continue;
            }
            if(arr1[i] < arr2[j]){
                v.push_back(arr1[i++]);
            }else if(arr2[j] < arr1[i]){
                v.push_back(arr2[j++]);
            }else{
                v.push_back(arr1[i++]);
                j++;
            }
        }
        while(i<n){
            if(i > 0 && arr1[i] == arr1[i-1]){
                i++;
                continue;
            }
            v.push_back(arr1[i]);
            i++;
        }
        while(j<m){
            if(j > 0 && arr2[j] == arr2[j-1]){
                j++;
                continue;
            }
            v.push_back(arr2[j]);
            j++;
        }
        return v;
    }
