class Logic
{
    void displayFactors(int num)
    {
        int n = Math.abs(num);

        if (n == 0)
        {
            System.out.println("Every non-zero integer is a factor of 0.");
            return;
        }

        System.out.println("Factors of " + num + " are:");
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                System.out.println(i);
            }
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.displayFactors(12);
    }
}

