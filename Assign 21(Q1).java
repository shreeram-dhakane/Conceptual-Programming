class Logic
{
    void productOfDigits(int num)
    {
        int n = Math.abs(num);
        if (n == 0)
        {
            System.out.println("Product of digits of 0 is: 0");
            return;
        }

        int product = 1;
        while (n > 0)
        {
            product *= n % 10;
            n /= 10;
        }

        System.out.println("Product of digits of " + num + " is: " + product);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.productOfDigits(234);
    }
}
