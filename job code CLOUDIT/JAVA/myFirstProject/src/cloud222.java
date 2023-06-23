public class cloud222

{


    static void function_one(int n)

    {

        if (n <1 )

            return;

        function_two(n);

        System.out.println("");

        function_one(n - 1);

    }

    static void function_two(int n)

    {

        if (n < 1)

            return;

        System.out.print("*");

        function_two(n - 1);

    }

    public static void main(String args[])

    {
        function_one(10);

    }

}