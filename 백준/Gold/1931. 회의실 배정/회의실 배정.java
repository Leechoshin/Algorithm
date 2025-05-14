import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        Room[] arr = new Room[n];
        
        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int startTime = Integer.parseInt(st.nextToken());
            int endTime = Integer.parseInt(st.nextToken());
            arr[i] = new Room(startTime, endTime);
        }
        
        Arrays.sort(arr);
        
        int count = 0;
        int time = 0;
        for (int i = 0; i < n; i++) {
            if (time <= arr[i].startTime) {  
                count++;
                time = arr[i].endTime;
            }
        }
        System.out.print(count);
    }
    

    static class Room implements Comparable<Room> {
        int startTime;  
        int endTime;  

        public Room(int startTime, int endTime) {
            this.startTime = startTime;
            this.endTime = endTime;
        }

        @Override
        public int compareTo(Room R) {
            if (endTime == R.endTime) return startTime - R.startTime;
            return endTime - R.endTime;
        }
    }
}