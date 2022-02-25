class Solution {
public:
    int compareVersion(string version1, string version2) {
        replace(version1.begin(), version1.end(), '.', ' '); 
        replace(version2.begin(), version2.end(), '.', ' '); 
	
	
    istringstream ss1(version1);
    istringstream ss2(version2);
    
    while (true) 
    {
        string str1, str2;
        int tmp1, tmp2;
        
		//output to string next revision level
		ss1 >> str1;
        ss2 >> str2;
         
		//convert to int (if not empty)
        tmp1 = str1.empty() ? 0 : stoi(str1);
        tmp2 = str2.empty() ? 0 : stoi(str2);
        
		//both came to end of revision levels
        if (str1.empty() && str2.empty())
            return 0;
			
        //compare
        if (tmp1 < tmp2)
            return -1;
        
        if (tmp1 > tmp2)
            return 1;
		
    }
   
    return 0;
    }
};