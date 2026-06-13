
class Logic
{
	void calculatePower(int base, int exp)
	{
		if (exp < 0)
		{
			double result = 1.0;
			int e = -exp;
			for (int i = 0; i < e; i++)
				result /= base;

			System.out.println(base + "^" + exp + " = " + result);
			return;
		}

		long result = 1;
		for (int i = 0; i < exp; i++)
			result *= base;

		System.out.println(base + "^" + exp + " = " + result);
	}
}

class Program
{
	public static void main(String args[])
	{
		Logic obj = new Logic();
		obj.calculatePower(2, 5);
	}
}

