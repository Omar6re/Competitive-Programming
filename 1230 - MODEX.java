import java.math.BigInteger;
import java.util.Scanner;
import java.util.ArrayList;

public class Modex
{
	public static void main (String[] args)
	{
		Scanner cin = new Scanner(System.in);
		int counter = 0;
		BigInteger x = new BigInteger("0");
		BigInteger y = new BigInteger("0");
		BigInteger n = new BigInteger("0");
		ArrayList <BigInteger> results = new ArrayList<BigInteger>();
		while(cin.hasNextBigInteger())
		{
			counter++;
			if (counter == 1){
				BigInteger lines = cin.nextBigInteger();
			}
			x = cin.nextBigInteger();
			if (x.compareTo(BigInteger.valueOf(0)) == 0)
			{
				break;
			}
			y = cin.nextBigInteger();
			n = cin.nextBigInteger();
			x = x.modPow(y,n);
			results.add(x);
		}
		for (BigInteger result:results)
		{
			System.out.println(result);
		}
	}
}