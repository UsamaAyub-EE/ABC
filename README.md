# ABC
Solution of a problem I found in Topcoder practice problems

Problem Statement
You are given two s: N and K. Lun the dog is interested in strings that satisfy the following conditions:
•	The string has exactly N characters, each of which is either 'A', 'B' or 'C'.
•	The string s has exactly K pairs (i, j) (0 <= i < j <= N-1) such that s[i] < s[j].
If there exists a string that satisfies the conditions, find and return any such string. Otherwise, return an empty string.
Definition
Class: ABC 
Method: createString 
Parameters: int, int 
Returns: string 
Method signature: string createString(int N, int K) 
(be sure your method is public)
Limits
Time limit (s): 2.000 
Memory limit (MB): 256 
Constraints
- N will be between 3 and 30, inclusive.
- K will be between 0 and N(N-1)/2, inclusive.
Examples
0) 
3 
3 
Returns: "ABC" 
This string has exactly three pairs (i, j) mentioned in the statement: (0, 1), (0, 2) and (1, 2). 
1) 
3 
0
Returns: "CBA" 
Please note that there are valid test cases with K = 0. 
2) 
5 
10 
Returns: "" 
Five characters is too short for this value of K. 
3) 
15
36
Returns: "CABBACCBAABCBBB"
Please note that this is an example of a solution; other valid solutions will also be accepted.
