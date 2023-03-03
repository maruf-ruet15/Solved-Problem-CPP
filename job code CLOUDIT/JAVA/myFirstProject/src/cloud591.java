class Square {
    double width, height;

    Square(double a, double b) {

        width = a;

        height = b;
    }

    double area() {

        return width * height;

    }

}

class cloud591 {

    public static void main(String[] args) {

        Square s1 = new Square(15.5, 20.44); // Parameterized Constructor

        double area_of_sqaure = s1.area();
        System.out.println("The area of square is:" + area_of_sqaure);
    }
}