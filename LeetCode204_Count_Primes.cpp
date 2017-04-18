class Solution {
public:
	int countPrimes(int n) {
		if (n <= 2) 
		{
		    return 0;
		}

		vector<bool> isPrimer(n, true);
		for (int i = 2; i * i < n; i++) 
		{
			if (isPrimer[i])
			{
			    for (int j = i ; j * i < n; j ++)
			    {
			        isPrimer[j * i] = false;
			    }
			}
		}
		
		int res = 0;
		for (int i = 2; i < n; i++)
		{
		    if (isPrimer[i])
		    {
		        res++;
		    }
		}
			
		return res;
	}
};