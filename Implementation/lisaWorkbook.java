import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the workbook function below.
    static int workbook(int chapters, int pageLimit, int[] arr) {
        int pageNumber = 1;
        int result = 0;
        
        for(int i = 0; i < arr.length; i++) {
            int questions = arr[i];
            int lowerLimit = 1;
            boolean flag = true;
            int temp = questions;
            
            while(flag == true){
                
                int upperLimit = Math.min(lowerLimit + pageLimit -1, questions);
                
                if(pageNumber >= lowerLimit && pageNumber <= upperLimit){
                    // System.out.println(" pageNumber " + pageNumber  + " quantity " + arr[i] +" chapterNumber " +(i + 1));
                    // System.out.println("lowerLimit " + lowerLimit + " upperLimit " + upperLimit);
                    // System.out.println();
                    result++;
                }
                
                lowerLimit = lowerLimit + pageLimit;
                pageNumber++;
                temp = temp - pageLimit;
                
                if(temp <= 0) {
                    flag = false;
                }
            }
            
        }
        
        return result;

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String[] nk = scanner.nextLine().split(" ");

        int n = Integer.parseInt(nk[0]);

        int k = Integer.parseInt(nk[1]);

        int[] arr = new int[n];

        String[] arrItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int arrItem = Integer.parseInt(arrItems[i]);
            arr[i] = arrItem;
        }

        int result = workbook(n, k, arr);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
