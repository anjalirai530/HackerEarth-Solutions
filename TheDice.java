
import java.util.Scanner;
class TestClass {
    public static void main(String args[] ) throws Exception {
Scanner s = new Scanner(System.in);
String str = s.nextLine();
int count = 0,i=0;
for( i=0;i<str.length();i++)
{
       if(str.charAt(i) >='1' && str.charAt(i)<='6')
         {
             if(str.charAt(i)!='6')
                count++;
         }
    
}
if(str.charAt(i-1) == '6')
System.out.println("-1");
else
System.out.println(count);







        /* Sample code to perform I/O:
         * Use either of these methods for input

        //BufferedReader
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String name = br.readLine();                // Reading input from STDIN
        System.out.println("Hi, " + name + ".");    // Writing output to STDOUT

        //Scanner
        Scanner s = new Scanner(System.in);
        String name = s.nextLine();                 // Reading input from STDIN
        System.out.println("Hi, " + name + ".");    // Writing output to STDOUT

        */

        // Write your code here


    }
}
