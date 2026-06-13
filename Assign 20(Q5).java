class Logic
{
	void findSmallestDigit(int num)
	{
		int n = Math.abs(num);
		if (n == 0) 
        {
			System.out.println("Smallest digit is 0");
			return;
		}

		int min = 9;
		while (n > 0) 
        {
			int d = n % 10;
			if (d < min) min = d;
			if (min == 0) break; // early exit
			n /= 10;
		}

		System.out.println("Smallest digit is " + min);
	}
}

class Program
{
	public static void main(String args[])
	{
		Logic obj = new Logic();
		obj.findSmallestDigit(45872); // expected: Smallest digit is 2
	}
}
