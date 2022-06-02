//find PrimeFactors
public static int[] primeFactors(int n)
{
List result = new List();

	// Print the number of 2s that divide n 
	while (n % 2 == 0) 
	{ 
		result.Add(2);
		n /= 2; 
	} 

	// n must be odd at this point. So we can 
	// skip one element (Note i = i +2) 

	for (int i = 3; i <= Math.Sqrt(n); i+= 2) 
	{ 
		// While i divides n, print i and divide n 
		while (n % i == 0) 
		{ 
			result.Add(i);
			n /= i; 
		} 
	} 

	// This condition is to handle the case when n is a prime number greater than 2 and so above two does not do anything. 
	if (n > 2) 
		result.Add(n);

      return result.ToArray();
} 
