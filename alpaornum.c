import java.util.Scanner;
public class Q {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		char n;//declaring a variable
		Scanner s=new Scanner(System.in);//creating object to read input
		n=s.next(".").charAt(0);//reading input from user
		if(n>='A'&&n<='Z'||n>='a'&&n<='z')//condition to check given input is alphabet or not
			System.out.println("alphabet");
		else
			if(Character.isDigit(n))
			System.out.println("number");
			else
				System.out.println("others");
				
	}

}
