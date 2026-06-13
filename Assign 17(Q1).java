class Logic 
{
    void sumOfDigits(int num) 
    {
        int sum = 0;
        int n = Math.abs(num);
        while (n > 0) 
        {
            sum += n % 10;
            n /= 10;
        }
        System.out.println("The sum of digits of " + num + " is: " + sum);
    }
}

class Assign17Q1 
{
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }
}
