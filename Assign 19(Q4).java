
class Logic
{
	void printDigits(int num)
	{
		if (num == 0)
		{
			System.out.println(0);
			return;
		}

		int n = Math.abs(num);
		String s = Integer.toString(n);
		for (int i = 0; i < s.length(); i++)
		{
			System.out.println(s.charAt(i));
		}
	}
}

class Program
{
	public static void main(String args[])
	{
		Logic obj = new Logic();
		obj.printDigits(9876);
	}
}

