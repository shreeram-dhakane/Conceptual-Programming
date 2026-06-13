class Logic
{
    void countEvenOddRange(int n)
    {
        int evenCount = 0;
        int oddCount = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
        }

        System.out.println("Number of even numbers between 1 and " + n + ": " + evenCount);
        System.out.println("Number of odd numbers between 1 and " + n + ": " + oddCount);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}

