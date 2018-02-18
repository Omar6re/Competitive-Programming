import java.math.BigInteger;
import java.util.Scanner;

public class VeryEasy
{
	public static void main(String[] args)
	{
		Scanner cin = new Scanner(System.in);
		int n,a;
		while(cin.hasNextInt())
		{
			n = cin.nextInt();
            a = cin.nextInt();
            BigInteger sum = new BigInteger("0"), 
            tmpA = BigInteger.valueOf(a);
            for(int i = 1; i <= n; i++)
                sum = sum.add(BigInteger.valueOf(i).multiply(tmpA.pow(i)));
            System.out.println(sum);
		}
	}
}