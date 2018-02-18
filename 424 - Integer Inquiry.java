import java.math.BigInteger;
import java.util.Scanner;

public class IntegerInquiry
{
	public static void main(String[] args)
	{
		Scanner cin = new Scanner(System.in);
		BigInteger sum = new BigInteger("0");
		while(cin.hasNextBigInteger())
		{
			BigInteger a = cin.nextBigInteger();
			if (a.compareTo(BigInteger.valueOf(0)) == 0)
			{
				break;
			}
			sum = sum.add(a);
		}
		System.out.println(sum);
	}
}