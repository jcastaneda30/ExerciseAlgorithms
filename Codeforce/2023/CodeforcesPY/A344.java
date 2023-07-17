import java.util.Scanner;

public class A344 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] numeros = new int[n];
		int count = 1;
		for(int i=0;i<n;i++) {
			numeros[i]=sc.nextInt();
		}
		for(int i=0;i<n-1;i++) {
			if (numeros[i]!=numeros[i+1]) {
				count++;
			}
		}
		System.out.println(count);
	}

}
