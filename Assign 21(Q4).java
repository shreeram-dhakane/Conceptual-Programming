class Logic
{
    void countFactors(int num)
    {
        int n = Math.abs(num);
        if (n == 0)
        {
            System.out.println("0 has infinitely many factors.");
            return;
        }

        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }

        System.out.println("Total number of factors of " + num + " is: " + count);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countFactors(20);
    }
}

