class Logic 
{
    void sumEvenOddDigits(int num) 
    {
        int evenSum = 0;
        int oddSum = 0;
        int n = Math.abs(num);

        while (n > 0) 
            {
            int digit = n % 10;
            if (digit % 2 == 0) 
            {
                evenSum += digit;
            } 
            else 
            {
                oddSum += digit;
            }
            n /= 10;
        }

        System.out.println("Sum of even digits: " + evenSum);
        System.out.println("Sum of odd digits: " + oddSum);
    }
}

class Program 
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}
