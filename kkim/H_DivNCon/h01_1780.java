// class명 Main으로 바꾼 뒤 사용
import java.util.* ;

public class Main {
	private static int		num = 0 ;
	private static int[]	cnt = new int[3] ;
	private static int[][]	arr ;
	
	public	static void main(String[] args) {
		Scanner scan = new Scanner(System.in) ;
		num = Integer.parseInt(scan.nextLine()) ;
		arr = new int[num][num] ;
		
		for(int i=0; i<num; i++) {
			for(int j=0; j<num; j++) {
				arr[i][j] = scan.nextInt() ;
			}
		}
		
		cut(0, 0, num) ;
		System.out.println(cnt[0]+"\n"+cnt[1]+"\n"+cnt[2]) ;
	}

	private static void cut(int row, int col, int num) {
		if(check(row, col, num)) {
			cnt[arr[row][col]+1]++ ;
		} else {
			int k = num/3 ;
			for(int i=0; i<3; i++) {
				for(int j=0; j<3; j++) {
					cut(row+k*i, col+k*j, k) ;
				}
			}
		}
	}

	private static boolean check(int row, int col, int num) {
		int tmp = arr[row][col] ;
		for(int i=row; i<row+num; i++) {
			for(int j=col; j<col+num; j++) {
				if(tmp != arr[i][j]) {
					return false ;
				}
			}
		}
		return true ;
	}
}
