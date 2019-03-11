class Person{
    private int regiNum;
    private int passNum;

    Person(int rnum, int pnum){
        regiNum = rnum;
        passNum = pnum;
    }

    Person(int rnum){
        regiNum = rnum;
        passNum = 0;
    }

    void showInfo(){
        System.out.println("Registeration number: " + regiNum);

        if (passNum != 0){
            System.out.println("Password: " + passNum);
        }

        else
            System.out.println("Password is not given.");
    }

    public static void main (String[] args){
        Person p1 = new Person(123, 123);
        Person p2 = new Person(333);
        p1.showInfo();
        p2.showInfo();
    }
}