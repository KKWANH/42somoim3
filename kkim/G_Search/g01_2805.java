// Class Name : Main으로 변경 후 사용

import java.io.BufferedReader	 ;
import java.io.IOException		 ;
import java.io.InputStreamReader ;
import java.util.Arrays			 ;
import java.util.StringTokenizer ;
public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader  bfr = new BufferedReader(new InputStreamReader(System.in)) ;
		
		StringTokenizer stk = new StringTokenizer(bfr.readLine(), " ") ;
		int[] inf = new int[2] ;
		inf[0] = Integer.parseInt(stk.nextToken()) ;
		inf[1] = Integer.parseInt(stk.nextToken()) ;
		
		int[] arr = new int[inf[0]] ;
		stk = new StringTokenizer(bfr.readLine(), " ") ;
		for(int i=0; i<inf[0]; i++)
			arr[i] = Integer.parseInt(stk.nextToken()) ;
		Arrays.sort(arr) ;
		bfr.close() ;
		
		int  max = arr[inf[0]-1] ;
		int  min = 0 ;
		int  mid = 0 ;
		while(max >= min) {
			mid = (min+max)/2 ;
			
			int  cut = 0 ; // 자르고 남은 길이
			long sum = 0 ; // 자르고 남은 길이의 합	
			
			for(int i=0; i<inf[0]; i++) {
				cut = arr[i] - mid ;
				if(cut < 0)
					cut = 0 ;
				sum += cut ;
			}
			
			if(sum >= inf[1])		min = mid + 1 ;
			else if(sum < inf[1])	max = mid - 1 ;
		}
		
		System.out.println(max) ;
	}
}
