public class Two{
	public static void main(String[] args) {
		int arr[][]={{4,6},{1,2,4,5,},{-2,-3}};
		int sum=0;
		for(int i=0;i<arr.length;i++){
			for(int j=0;j<arr[i].length;j++){
				sum+=arr[i][j];
			}
		}
		System.out.println(sum);
	}
}