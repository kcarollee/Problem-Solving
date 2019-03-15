class StringPrac{
    public static void show(String str){
        System.out.println(str);
        System.out.println(str.length());
    }
    public static void strcmp(String str1, String str2){
        if (str1 == str2)
            System.out.println("Referencing same string instance");
        else
            System.out.println("Referencing different string instance");
    }
    public static void main(String[] args){
        String str1 = new String("Eimple");
        String str2 = "Best";
        //string instances are immutable.
        String s1 = "Hello";
        String s2 = "Hello";

        String s3 = new String("Bye");
        String s4 = new String("Bye");

        String subtest = "abcdefg";

        System.out.println(str1);
        System.out.println(str1.length());
        System.out.println();

        System.out.println(str2);
        System.out.println(str2.length());
        System.out.println();

        show(str2);

        strcmp(s1, s2);
        strcmp(s3, s4);

        System.out.println(str1.concat(str2.concat("There's more!")) + " " + "There's even more!".concat(s1));
        System.out.println(subtest.substring(2, 4) + " " + subtest.substring(2));
    }
}
