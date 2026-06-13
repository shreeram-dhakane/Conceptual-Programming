
class Logic
{
	void checkDivisible(int num)
	{
		boolean by5 = (num % 5 == 0);
		boolean by11 = (num % 11 == 0);

		if (by5 && by11)
			System.out.println(num + " is divisible by both 5 and 11");
		else if (by5)
			System.out.println(num + " is divisible by 5");
		else if (by11)
			System.out.println(num + " is divisible by 11");
		else
			System.out.println(num + " is not divisible by 5 or 11");
	}
}

class Program
{
	public static void main(String args[])
	{
		Logic obj = new Logic();
		obj.checkDivisible(55);
	}
}

