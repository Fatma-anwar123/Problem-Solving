import java.util.Scanner;

public class Program
{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int amount = scanner.nextInt();
		double payement=amount;
		double remindaer=amount;
		
		//your code goes here
		for(int i=0;i<3;i++){
		
		  payement= remindaer*0.1;
		
		  remindaer=remindaer-payement;
		  
		}
		System.out.println((int)remindaer);
	}
}
