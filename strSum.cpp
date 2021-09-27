int findSum(string str)
    {
    	
    	// Your code here
    	int element = 0, sum = 0;
    	for(int i = 0; i < str.length(); i++)
    	{
    	    if(isdigit(str[i]))
    	    {
    	        int digit =  str[i]-'0';
    	        element = element*10 + digit;
    	    }
    	    else
    	    {
    	        sum += element;
    	        element = 0;
    	    }
    	}
    	return sum+element;
    }
