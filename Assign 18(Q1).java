class Logic 
{
    void checkPrime(int num) 
    {
        if (num <= 1) 
        {
            System.out.println(num + " is not prime");
            return;
        }
        for (int i = 2; i <= Math.sqrt(num); i++) 
        {
            if (num % i == 0) 
            {
                System.out.println(num + " is not prime");
                return;
            }
        }
        System.out.println(num + " is prime");
    }
}

class Program {
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}
