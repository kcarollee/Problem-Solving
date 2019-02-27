class MethodDef
{
    public static void main(String [] args)
    {
        System.out.println("Beginning of program");

        hello(2);
        divide(3, 0);
        divide(30, 10);

        System.out.println("End of program");

    }

    public static void hello(int age)
    {
        System.out.println("Hello, World! I am " + age + " years old.");
    }

    public static void divide(int x, int y)
    {
        if (y == 0){
            System.out.println("Can't divide by zero");
            return;

        }
        System.out.println("Result: " + (x / y));
    }
}