#include	<iostream>
#include	<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	scanf("%d",&n);
    cin.ignore();
	string c;
	
	char m;
	
	for( int i=1;i<=n;i++ )
	{
		getline(cin,c);
		int l=c.length();
		stack<char>sc;
		
		for( int j=0; j < l; j++  )
		{
			
			if(!sc.empty() && c[j]==')' && sc.top()=='(')
            {
                sc.pop();
            }
            else if(!sc.empty() && c[j]==']' && sc.top()=='[')
            {
               sc.pop();
            }
			else
			{
				sc.push( c[ j ] );
				
			}
		}
		
		if( sc.empty() ){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
		
	}
	
	return 0;
}