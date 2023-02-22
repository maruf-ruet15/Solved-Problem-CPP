class Square{ 
    int width, height;

    Square(int a, int b){

        width = a;
        
        height = b;
}

int area(){

return width*height;

}

}

class Main{

public static void main(String[] args){

Square s1 = new Square(10,20); // Parameterized Constructor

int area_of_sqaure = s1.area(); 
System.out.println("The area of square is:"+ area_of_sqaure);
}
}