class Logic 
{
	void sumEvenNumbers(int n) 
{
		int k = n / 2; // number of even terms (2,4,...,2k)
		long sum = (long) k * (k + 1); // sum = 2*(1+...+k) = k*(k+1)
		System.out.println("Sum of even numbers up to " + n + " is: " + sum);
	}
}

class Program 
{
	public static void main(String[] args) 
    {
		int n = 10; // default
		if (args.length > 0) 
        {
			try 
            {
				n = Integer.parseInt(args[0]);
			} 
            catch (NumberFormatException e) 
            {
				System.err.println("Invalid input, using default n=10");
			}
		}
		Logic obj = new Logic();
		obj.sumEvenNumbers(n);
	}
}

