i/p : "abc"
o/p : "","a","b","c","ab","bc","ac","abc"          // in any order
  
Using Bitwise Operator

void printPowerSet(string s)
{
	int n = s.size();
	int p = pow(2, n);
	for(int i = 0; i < p; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i & (1 << j) != 0)
					cout<<str[j];
		}
		cout<<"\n";
	}
}
