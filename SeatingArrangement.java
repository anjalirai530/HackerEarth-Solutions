
import java.util.*;

import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
     
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        int opp = 0;
        String str;
        while(test--!=0)
        {
           int m = sc.nextInt();
           int val = m%12;
           if(val == 0 || val == 1 || val ==6 || val == 7)
           {
            str = "WS";
            switch(val){
               case 0: opp = m -11;
               break;
               case 1: opp = m + 11;
               break;
               case 6: opp = m + 1;
               break;
               case 7: opp = m - 1;
           }
           System.out.println(opp + " " + str);
           }
else if(val == 2 || val == 11 || val == 5 || val==8)
{
               str = "MS";
switch(val)
{
case 2 : opp = m + 9;
               
               break;

case 11: opp=m-9;

break;

case 5: opp=m+3;

break;

case 8: opp=m-3;

}

System.out.println(opp+" "+str);
           }
           else if(val==3 || val==4 || val==9 | val==10){

str="AS";

switch(val){

case 3: opp=m+7;

break;

case 10: opp=m-7;

break;

case 4: opp=m+5;

break;

case 9: opp=m-5;

}

System.out.println(opp+" "+str);

}
        }


    }
}
