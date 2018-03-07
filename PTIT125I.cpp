    #include <bits/stdc++.h>
    using namespace std;
    int main ()
    {
    	long N, K;
    	cin>>N>>K;
    	stack <int> S;
    	for (long i=1; i<=N; i++)
    	{
    		char tmp_char;
    		cin>>tmp_char;
    		int tmp_int = tmp_char - '0';
    		if (S.empty())
    		{
    			S.push(tmp_int);
    		}
    		else
    		{
    			while (!S.empty() && tmp_int > S.top() && K>0)
    			{
    				S.pop();
    				K--;
    			}
    			S.push(tmp_int);
    		}
    	}
    	while (K>0 && !S.empty())
    	{
    		S.pop();
    		K--;
    	}
    	vector <int> smallest;
    	while (!S.empty())
    	{
    		int tmp=S.top();
    		S.pop();
    		smallest.push_back(tmp);
    	}
    	for (long i=smallest.size()-1; i>=0; i--)
    		cout<<smallest[i];
    	return 0;
    }
