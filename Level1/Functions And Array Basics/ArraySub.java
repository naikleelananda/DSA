import java.util.*;

public class ArraySub {
    public static void main(String[] args) {
        // Taking array input
        Scanner sc = new Scanner(System.in) ;

        int n1 = sc.nextInt();
        int n2 = sc.nextInt();

        int[] a1 = new int[n1];
        int[] a2 = new int[n2];

        for( int i=0  ; i<a1.length ; i++) {
            a1[i] = sc.nextInt();

        }
        for( int i=0 ; i<a2.length ; i++){
            a2[i] = sc.nextInt() ;

        }
        int[] ans = new int[n2];
        int i = a1.length -1;
        int j= a2.length -1;
        int k= ans.length -1;
        int borrow = 0 ;
       
        while ( k >= 0) {
          int diff = 0;
          int a1v = i >= 0 ? a1[i] : 0 ;

          if( a2[j] + borrow >= a1v){
              diff = a2[j] + borrow - a1[i];
              borrow = 0;
          }else{
             diff =  a2[j] + borrow + 10 - a1[i];
             borrow = -1;
          }
          ans[k] = diff;
          i--;
          j--;
          k--;

        }
        int idx = 0 ; 
        while ( idx < ans.length ){
            if( ans[idx] == 0){
                idx ++;
            }else{
                break;
            }
        }
        while( idx < ans.length){
            System.out.println(ans[idx]);
            idx++;
        }
    }
}