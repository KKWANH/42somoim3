// class명 Main으로 바꾼 뒤 사용

import java.io.BufferedReader;
import java.io.IOException ;
import java.io.InputStreamReader;
public class Main {
	public static int num ;
	public static int arr[][] ;
	public static void main(String[] args) throws IOException {
		BufferedReader bfr = new BufferedReader(new InputStreamReader(System.in)) ;
		num = Integer.parseInt(bfr.readLine()) ;
		arr = new int[num][num] ;
		for(int i=0; i<num; i++) {
			String tmp = bfr.readLine() ;
			for(int j=0; j<num; j++)
				arr[i][j] = Integer.parseInt(tmp.charAt(j)+"") ;
		}
		
		quadTree(0, 0, num) ;
	}
	
	public static void quadTree(int x, int y, int num) {
		if(compare(x, y, num)) {
			System.out.print(arr[x][y]) ;
		} else {
			System.out.print("(") ;
			int tmp = num/2 ;
			for(int i=0; i<2; i++)
				for(int j=0; j<2; j++)
					quadTree(x+(tmp*i), y+(tmp*j), tmp) ;
			System.out.print(")") ;
		}
	}
	
	public static boolean compare(int x, int y, int num) {
		for(int i=x; i<x+num; i++)
			for(int j=y; j<y+num; j++)
				if(arr[x][y] != arr[i][j])
					return false ;
		return true ;
	}
}
