import java.util.*;

public class Recursive {
	public static void main(String[] args) {
		int[] array = new int[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

		System.out.println("THE ORIGINAL ARRAY: "+array);
		adding_nums(array);
	}
	static void adding_nums (int[] list) {
		if(list.size() == 1) {
			System.out.println("Done adding.");
		}
/*		else {
			int size = list.size();
			int result = list.get(1) + list.get(0);
			list.add(0, result); //reassign list 0 with result
			System.out.println(list);
			List<Integer> new = new ArrayList<Integer>();
				
			adding_nums(list);
		}
	}*/
}
}
