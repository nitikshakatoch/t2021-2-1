import java.util.*;
public class Main{

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int arr[] = {1,2,8,9,12,86,76,82,15,20,30};
		int n = arr.length, count,inc; 
		for(int i = 0; i<9 ; i++)
		{
			inc = i+1;
			count=0;
			for(int j = 0;j<n;j++)
			{ 
			if(arr[j]% inc ==0)
			count++;
			}
			System.out.print( inc +": " + count + " ");
		}
	}

}
