class Logic
{
    void printDivisibleBy2and3(int n)
    {
        System.out.println("Numbers from 1 to " + n + " divisible by both 2 and 3:");
        for (int i = 1; i <= n; i++)
        {
            if (i % 6 == 0)
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
        obj.printDivisibleBy2and3(30);
    }
}
