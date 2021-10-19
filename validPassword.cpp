#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string pwd;
	    cin>>pwd;
	    int n = pwd.length();
	    bool lower = false,upper=false,digit=false;
	    for(int i = 0; i < n; i++){
	        if(islower(pwd[i])){
	            lower = true;
	        }
	        if(isupper(pwd[i])){
	            upper = true;
	        }
	        if(isdigit(pwd[i])){
	            digit = true;
	        }
	    }
	    if(lower and upper and digit){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	
	return 0;
}
