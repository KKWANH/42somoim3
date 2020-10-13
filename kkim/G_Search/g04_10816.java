import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
public class Main {
	public	static void  main(String[] args) throws IOException {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in)) ;
		
		int   nm1 = Integer.parseInt(bfr.readLine()) ;
		int[] cnt = new int[20_000_001] ;
		StringTokenizer sTk = new StringTokenizer(bfr.readLine()) ;
		for(int i=0; i<nm1; i++)
			cnt[Integer.parseInt(sTk.nextToken()) + 10_000_000]++ ;
		
		int nm2 = Integer.parseInt(bfr.readLine()) ;
		sTk = new StringTokenizer( bfr.readLine()) ;
		StringBuffer sBf = new StringBuffer() ;
		for(int i=0; i<nm2; i++)
			sBf.append(cnt[Integer.parseInt(sTk.nextToken()) + 10_000_000] + " ") ;
		
		System.out.print(sBf+" ") ;
	}
}