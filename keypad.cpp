string printNumber(string s, int n) 
{
    //code here
     int i;
   string r="";
   
   for ( i=0; i<n ;i++)
   {
    if (s[i]=='a'||s[i]=='b'||s[i]=='c'   )
    r=r + '2';
    else if(s[i]=='d'||s[i]=='e'||s[i]=='f')
    r=r + '3';
    else if( s[i]=='g'||s[i]=='h'||s[i]=='i')
    r=r + '4';
    else if (s[i]=='j'||s[i]=='k'||s[i]=='l')
    r=r + '5';
    else if( s[i]=='m'||s[i]=='n'||s[i]=='o')
    r=r + '6';
    if (s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s'  )
    r=r + '7';
    else if(s[i]=='t'||s[i]=='u'||s[i]=='v')
    r=r + '8';
    else if( s[i]=='w'||s[i]=='x'||s[i]=='y'||s[i]=='z')
    r=r + '9';
   }
    
   return r;
}
string printNumber(string s, int n) 
{
    map<char, int> m;
    m['a']=2;m['d']=3;m['g']=4;m['j']=5;m['m']=6;m['p']=7;m['s']=7;m['v']=8;m['y']=9;
    m['b']=2;m['e']=3;m['h']=4;m['k']=5;m['n']=6;m['q']=7;m['t']=8;m['w']=9;m['z']=9;
    m['c']=2;m['f']=3;m['i']=4;m['l']=5;m['o']=6;m['r']=7;m['u']=8;m['x']=9;
    
    string res = "";
    for(char const &x: s)
        res+=to_string(m[x]);
    return res;
}
