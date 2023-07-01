public class staticTest {
   int eid;
   int salary;
   static String ceo;

   static {
      ceo = "maruf";
      System.out.println("from static");

   }

   public staticTest() {
      eid = 1;   //these are the default value of the constructor
      salary = 40000;     //these are the default value of the constructor
      System.out.println("from constractor");
   }
   public void show(){
      System.out.println("eid:"+ eid + "  "+"salary:"+salary+"  "+ "ceo:"+ ceo);
   }

   public static void main(String[] args) {
      staticTest obj1 = new staticTest();
      staticTest obj2 = new staticTest();
      obj1.eid = 101;
      obj1.salary = 20000; //non static variable can be loded with creating an object
      // staticTest.ceo = "sadat";  //static variable can be loded by class

      staticTest.ceo = "maruadon2";
      obj1.show();
      obj2.show();

      // System.out.println(obj1.eid);
      // System.out.println(obj1.salary);
      // System.out.println(obj1.ceo); 

      // System.out.println(obj2.eid);
      // System.out.println(obj2.salary);
      // System.out.println(staticTest.ceo);
      staticTest.ceo = "rahul";
      obj2.show();
      
   }
}