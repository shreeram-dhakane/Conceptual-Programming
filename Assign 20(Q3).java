class Logic
{
	void checkPerfect(int num)
	{
		if (num <= 1) 
        {
			System.out.println(num + " is not a perfect number.");
			return;
		}

		int sum = 0;
		for (int i = 1; i <= num / 2; i++) 
        {
			if (num % i == 0) 
            {
				sum += i;
			}
		}

		if (sum == num) 
        {
			System.out.println(num + " is a perfect number.");
		} 
        else 
        {
			System.out.println(num + " is not a perfect number.");
		}
	}
}

class Program
{
	public static void main(String args[])
	{
		Logic obj = new Logic();
		obj.checkPerfect(6); // expected: 6 is a perfect number.
	}
}

