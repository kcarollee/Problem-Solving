class ByteOp
{
    public static void main(String[] args)
    {
        byte n1 = 13;
        byte n2 = 7;
        byte n3 = (byte) (n1 & n2);
        System.out.println(n3);
        //other bit operators include | (or), ^ (xor), ~ (not)
        //bit shift operatos exist, too: <<, >>, >>>
    }
}