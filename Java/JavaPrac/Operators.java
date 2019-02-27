class Operators
{
    public static void main(String[] args)
    {
        short num = 10;
        num = (short) (num + 77L);
        int rate = 3;
        rate = (int) (rate * 3.5);
        System.out.println(num);
        System.out.println(rate);

        num = 10;
        num += 77L;//doesn't need explicit conversion
        rate = 3;
        rate *= 3.5;//doesn't need explicit conversion
        System.out.println(num);
        System.out.println(rate);

        System.out.println(3>=2);
        System.out.println(-num);
    }
}