class InstCnt
{
    static int instNum = 0;//variables declared as static are shared by every instance

    InstCnt()
    {
        instNum++;
        System.out.println("Instance created: " + instNum);
    }
    //if a method does not reference or change instance variables, it's better to declare it as static, thus avoiding
    //unnecessary creation of an instance.
    //static methods and variables can be called even before an instance is created.
    static void showNum(int num)
    {
        System.out.println(num);
    }
}

class ClassVar
{
    public static void main(String[] args)
    {
        InstCnt cnt1 = new InstCnt();
        InstCnt cnt2 = new InstCnt();
        InstCnt cnt3 = new InstCnt();
        InstCnt.instNum += 1;//accessing class's static variable
        cnt3.instNum++;//accessing class's static variable
        InstCnt cnt4 = new InstCnt();
        cnt1.showNum(133);
        cnt4.showNum(233);
    }
}