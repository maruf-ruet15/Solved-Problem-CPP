public class oop {
   int eid;
   int salary;
   static String ceo;
   public void oop(int eid,int salary,String ceo){
    this.eid = eid;
    this.salary = salary;
    this.ceo = ceo;
   }
   
    
   public static void main(String[] args) {
    oop obj = new oop();
    oop obj2 = new oop();
    obj.eid = 101;
    obj.salary = 4000;
    obj.ceo = "Rahi";
    obj2.eid = 102;
    obj2.salary = 5000;
    obj2.ceo = "kabir";
    System.out.println(obj.eid +" "+obj.salary+" " + obj.ceo);
    System.out.println(obj2.eid +" "+obj2.salary+" " + obj2.ceo);
}
}
