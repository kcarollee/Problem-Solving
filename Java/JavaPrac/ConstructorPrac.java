class Testing
{
    String name;
    int number;

    public Testing(String s, int num)
    {
        name = s;
        number = num;
    }

    public void showNumber()
    {
        System.out.println(number);
    }
    public void showName()
    {
        System.out.println(name);
    }
}

class TestingExec
{
    public static void main(String[] args)
    {
        Testing t;
        t = new Testing("Karl", 23);
        t.showName();
        t.showNumber();
    }
}