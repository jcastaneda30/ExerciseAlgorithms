
import java.util.Scanner;
public class A318 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long n1= sc.nextLong();
		long n2= sc.nextLong();		
		long xd = n1/2;
		if(n1%2==1) {
			xd++;
		}
		if(n2 <= xd) {
			System.out.println(2*n2-1);
		}else {
			System.out.println(2*(n2-xd));
		}
		
	}

}
