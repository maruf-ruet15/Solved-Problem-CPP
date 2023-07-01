class outer {
    static int a;
    String name;

    public void outerShow(String name) {
        this.name = name;
        System.out.println("from from outer show");
        System.out.println("name from outer :" + name);

    }

    class inner {
        public void innerDiplay() {
            System.out.println("from from inner dispplay");
        }
    }
}

public class innerClass {
    public static void main(String[] args) {
        outer obj1 = new outer();
        obj1.outerShow("maru");
        // obj1.name = "maruf";

        outer.inner objInner = obj1.new inner(); // obj1 of outer will be used to create inner object
        objInner.innerDiplay();

    }
}
