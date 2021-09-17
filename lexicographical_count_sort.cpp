string countSort(string arr){
       int count[26]={0};
       int i;
       for(i=0;i<arr.length();i++)
       {
           count[arr[i]-97]++;
       }
       // this will not work
       // string output;
       // you can do this instead 
       string output = arr;
       // it should be 26 here not arr.length()
        for(i=1;i<26;i++)
        {
            count[i]=count[i]+count[i-1];
        }
        for(i=arr.length()-1;i>=0;i--)
        {
            output[count[arr[i]-97]-1] =arr[i];
            count[arr[i]-97]--;
        }
        return output;
    }
