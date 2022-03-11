import java.util.Scanner;
public class uparray{
	public static void main(String[] args) {
		int arr[]={10,12,23,56};
		int newarr[]=new int[arr.length+1];
		System.out.println("请输入要插入的整数:");
		Scanner scan=new Scanner(System.in);
		int num=scan.nextInt();
		for(int i=0;i<arr.length-1;i++){
			if(arr[i]<num&&arr[i+1]>num){
				for(int j=0;j<newarr.length;j++){
					if(j<=i){
						newarr[j]=arr[j];
					}else if(j==i+1){
						newarr[j]=num;
					}else{
						newarr[j]=arr[j-1];
					}
				}
				break;
			}
		}
		arr=newarr;
		for(int i = 0;i < arr.length;i++){
			for(int j = 0;j < arr[i].length;j++){
				System.out.print(arr[i][j]+" ");
			}
			System.out.println("");
		}
	}
}