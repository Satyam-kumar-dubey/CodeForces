import java.util.*;
class B_Make_it_Zigzag{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while(n>0){
            int a = sc.nextInt();
            int max = Integer.MIN_VALUE;
            int[] arr = new int[a];
            for(int i =0;i<a;i++){
                arr[i]= sc.nextInt();
                max=Math.max(max,arr[i]);
            }
            int j =0;
            int count=0;
            if(a==1) return 0;
            while(j<a){
                if(j==a-1){
                    if(j%2==0){
                        if(arr[j]<arr[j-1]){
                            break;
                        }
                        else{
                            arr[j]=arr[j]-1;
                            count++;
                        }
                    }
                    else{
                        if(arr[j]>arr[arr[j-1]]){
                            break;
                        }
                        else{
                            arr[j]=max;
                            count++;
                        }
                    }
                }
                if(j%2==0){
                    if(arr[j]>arr[j+1]){
                        arr[j]=arr[j]-1;
                        count++;
                    }
                }
                else{
                    if(arr[j]<arr[j+1]){
                        arr[j]=max;
                        count++;
                    }
                }
                j++;
            }
            System.out.print(count);
            n--;
        }
    }
}