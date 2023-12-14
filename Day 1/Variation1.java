import java.util.*;
public class variation1{
public static long nCr(int n, int r){
    long res = 1;
    for (int i = 0; i<r; i++){
        res = res * (n-i);
        res = res/(i+1);
    }
    return res;
}
public static int pascalTriangle(int r, int c){
    int element = (int) nCr(r-1, c-1);
    return element;
}
public static void main(String[] args){
    int r = 6;
    int c = 2;
    int element = pascalTriangle(r, c);
    System.out.println("The element at position (r,c) is: " + element);
}
}