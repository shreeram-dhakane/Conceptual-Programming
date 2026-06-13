
class Logic
{
	void displayGrade(int marks)
	{
		char grade;
		if (marks >= 90)
			grade = 'A';
		else if (marks >= 80)
			grade = 'B';
		else if (marks >= 70)
			grade = 'C';
		else if (marks >= 60)
			grade = 'D';
		else if (marks >= 50)
			grade = 'E';
		else
			grade = 'F';

		System.out.println(marks + " => Grade: " + grade);
	}
}

class Program
{
	public static void main(String args[])
	{
		Logic obj = new Logic();
		obj.displayGrade(82);
	}
}

