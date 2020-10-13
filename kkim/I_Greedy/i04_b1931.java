// class명 Main으로 바꾼 뒤 사용
import	java.util.* ;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in) ;
		int maxNum = Integer.parseInt(sc.nextLine()) ;
		ArrayList<Tuple> arr = new ArrayList<Tuple>(maxNum) ;
		
		for(int i=0; i<maxNum; i++) {
			Tuple t = new Tuple(sc.nextInt(), sc.nextInt());
            arr.add(t);
		}

		Collections.sort(arr, Tuple.oneCompare()) ;
		Collections.sort(arr, Tuple.twoCompare()) ;

		int cnt = 1 ;
		int crr_last = arr.get(0).two() ;
		
		for(int i=1; i<maxNum; i++) {
			int first = arr.get(i).one() ;
			int last  = arr.get(i).two() ;
			if(first >= crr_last) {
				cnt++ ;
				crr_last = last ;
			}
		}
		
		System.out.println(cnt) ;
	}
}

class Tuple {
	private final Integer x ;
	private final Integer y ;
	
	public Tuple(int x, int y) {
		this.x = x ;
		this.y = y ;
	}

	public int one() { return x;}
	public int two() { return y;}

	static Comparator<Tuple> oneCompare() {
		return new Comparator<Tuple>() {
			public int compare(Tuple X, Tuple Y) {
				return X.x.compareTo(Y.x) ;
			}
		} ;
	}
	
	static Comparator<Tuple> twoCompare() {
		return new Comparator<Tuple>() {
			public int compare(Tuple X, Tuple Y) {
				return X.y.compareTo(Y.y) ;
			}
		} ;
	}
}