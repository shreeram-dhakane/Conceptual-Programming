class Logic
{
	void findLargestDigit(int num)
	{
		int n = Math.abs(num);
		if (n == 0) 
        {
			System.out.println("Largest digit is 0");
			return;
		}

		int max = 0;
		while (n > 0) 
        {
			int d = n % 10;
			if (d > max) max = d;
			if (max == 9) break; // early exit
			n /= 10;
		}

		System.out.println("Largest digit is " + max);
	}
}

class Program
{
	public static void main(String args[])
	{
		Logic obj = new Logic();
		obj.findLargestDigit(83429); // expected: Largest digit is 9
	}
}
