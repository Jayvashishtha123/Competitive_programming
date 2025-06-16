import java.util.*;
public class Nikhil {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int nnn=sc.nextInt();
        for(int iii=0;iii<nnn;iii++){
            int n=sc.nextInt();
            int k=sc.nextInt();
            int[] ar = new int[n];
            for(int i=0;i<n;i++){
                ar[i]=sc.nextInt();
            }
            int c=0;
            int s=0,l=0;
            int br=-1;
            for(int i=0;i<n;i++){
                if(ar[i]>k)l++;
                else s++;
                if(s>=l && br==-1){
                    br=i+1;
                }
                if(s>=l){
                    c++;
                    while(i+1<n && ar[i+1]>k && s>l){
                        i++;
                        if(ar[i]>k)l++;
                        else s++;
                    }
                    s=0;l=0;
                }
                if(c==2)break;
            }
//            System.out.println(c +" "+br);
            s=0;l=0;
            for(int i=n-1;i>br;i--){
                if(c==2)break;
                if(ar[i]>k)l++;
                else s++;
                if(s>=l){
                    c++;
                    while(i-1>br && ar[i-1]>k && s>l){
                        i--;
                        if(ar[i]>k)l++;
                        else s++;
                    }
                    s=0;l=0;
                }
            }
//            System.out.println(c);
            if(c>=2) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}