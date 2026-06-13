class Logic 
{
    void checkPalindrome(int num) 
    {
        int original = Math.abs(num);
        int reversed = 0;
        int n = original;
        
        while (n > 0) 
        {
            reversed = reversed * 10 + n % 10;
            n /= 10;
        }
        
        if (original == reversed) 
        {
            System.out.println(num + " is a palindrome");
        } 
        else 
        {
            System.out.println(num + " is not a palindrome");
        }
    }
}

class Program {
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}
