class A {
    int i;

    public void show() {
        System.out.println("in A");
    }
}

class B extends A {
    int i;

    public void show() {
        System.out.println("in B");
    }
}

public class overridingDemo {
    public static void main(String[] args) {
        A obj = new B();  //which class object decide in run time
        obj.show();
    }
}
