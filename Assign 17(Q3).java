class Logic 
{
    void findMax(int a, int b) 
    {
        if (a > b) 
        {
            System.out.println(a + " is the maximum");
        } else if (b > a) 
        {
            System.out.println(b + " is the maximum");
        } else {
            System.out.println(a + " and " + b + " are equal");
        }
    }
}

class Program 
{
    public static void main(String A[]) {
        Logic obj = new Logic();
        obj.findMax(20, 15);
    }
}
