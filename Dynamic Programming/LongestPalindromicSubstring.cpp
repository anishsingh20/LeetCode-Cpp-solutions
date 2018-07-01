//DP solution
string longestPalindrome(string s) {
        
   int n = s.length();
  int longestBegin = 0;
  int maxLen = 1;
  bool table[1000][1000] = {false};
  for (int i = 0; i < n; i++) {
    table[i][i] = true;
  }
  for (int i = 0; i < n-1; i++) {
    if (s[i] == s[i+1]) {
      table[i][i+1] = true;
      longestBegin = i;
      maxLen = 2;
    }
  }
  for (int len = 3; len <= n; len++) {
    for (int i = 0; i < n-len+1; i++) {
      int j = i+len-1;
      if (s[i] == s[j] && table[i+1][j-1]) {
        table[i][j] = true;
        longestBegin = i;
        maxLen = len;
      }
    }
  }
  return s.substr(longestBegin, maxLen);
  }
  
  
  
  //brute force-O(n*n*n)
  bool isPalindrome(string s)
{
	int i = 0 , j = s.size()-1;
	
	while(s[i]==s[j])
	{
		i++;
		j--;
	}
	
	if(i < j) return false;
	
	else return true;
}

int LongestPalindromicSubstring(string a)
{
	int maxLen=0;
	int size = a.size();
	for(int i = 0 ; i < size ; i++ )
	{
		for(int j = i ;  j <= size ; j++)
		{	
    //picking out a substring
			string sub = a.substr(i,j);
			if(isPalindrome(sub) && sub.size() > maxLen)
			{
				maxLen = sub.size();
			
			}
				
		
		}
	}
		
	return maxLen;
}
