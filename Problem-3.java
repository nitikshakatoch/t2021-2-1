import java.util.*;
public class Main{

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int n = 1;
		if(a%2 == 1)
		{
		if(a == 1)
			 System.out.println(n);
		else {
			System.out.print("1");
		for(int i = 1; i < a;i++)
		{
			n +=2;
			System.out.print(", " + n);
		}
		}
		}
		else if(a%2 == 0)
		{
			a--;
			if(a == 1)
				 System.out.println(n);
			else {
				System.out.print("1");
			for(int i = 1; i < a;i++)
			{
				n +=2;
				System.out.print(", " + n);
			}
			}
		}
	}

}
