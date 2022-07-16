//https://www.interviewbit.com/problems/palindrome-string/discussion/
int Solution::isPalindrome(string s) {
    string s1;
    for(int i=0;i<s.length();i++)
	{
		if(s[i]>='A' && s[i]<='z')
		{
			if(s[i]<='Z')
				s1+=('a'+(s[i]-'A'));
			else
				s1+=s[i];
		}
        else if(s[i]>='0' && s[i]<='9')
                s1+=s[i];
	}
	for(int i=s1.length()-1,j=0;i>=0,j<s1.length();i--,j++)
		if(s1[i]!=s1[j])
		{
			return 0;
		}
	return 1;
}
