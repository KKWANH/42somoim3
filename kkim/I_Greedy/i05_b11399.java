import java.util.* ;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in) ;
		int maxNum = Integer.parseInt(scan.nextLine()) ;
		int time[] = new int[maxNum] ;
		int result = 0 ;
		
		String inputString = scan.nextLine() ;
		for(int i=0; i<maxNum; i++)
			time[i] = Integer.parseInt(inputString.split(" ")[i]) ;
		
		Arrays.sort(time) ;
		
		for(int i=0; i<maxNum; i++) {
			for(int j=0; j<=i; j++) {
				result += time[j] ;
			}
		}
		
		System.out.println(result) ;
	}
}
