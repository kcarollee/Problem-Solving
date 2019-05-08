class Testing{
    static private int c = 0;
    private int d = 1;
    public static void test(int a){
        int b = 0;
        c += a;
        System.out.println(b);
        System.out.println(b + c);
    }
}


public class staticmethod{
    public static void main(String[] args){
        Testing t = new Testing();
        t.test(3);
        t.test(4);
    }
}