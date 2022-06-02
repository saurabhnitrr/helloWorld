bool isPowerOfThree(int n) {
	if(!n) return false;
	while(n % 3 == 0) n /= 3;    
	return n == 1;
}
/*Time Complexity : O(log3(n))
Space Complexity : O(1)*/


bool isPower(int x, int y)
{
    // logarithm function to calculate value
    int res1 = log(y) / log(x);
    double res2 = log(y) / log(x); // Note : this is double
 
    // compare to the result1 or result2 both are equal
    return (res1 == res2);
}

//To do log(n) in O(1) 
