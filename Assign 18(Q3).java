class Logic 
{
    void printOddNumbers(int n) 
    {
        for (int i = 1; i <= n; i += 2) 
        {
            System.out.println(i);
        }
    }
}

class Program {
    public static void main(String A[]) 
    {
        Logic obj = new Logic();
        obj.printOddNumbers(20);
    }
}
