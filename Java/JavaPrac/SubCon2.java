class SuperClass{
    public SuperClass(){
        System.out.println("SuperClass constructor, no parameters given");
    }
    public SuperClass(int i){
        System.out.println("SuperClass constructor called, 1 parameter given");
    }
    public SuperClass(int i, int j){
        System.out.println("SuperClass constructor called, 2 parameters given");
    }
}

class SubClass extends SuperClass{
    public SubClass(){
        System.out.println("SubClass constructor, no parameters given");
    }
    public SubClass(int i){
        super(i); // designating and calling superclass constructor
        System.out.println("Con: SubClass(int i )");
    }

    public SubClass(int i, int j){
        super(i, j);
        System.out.println("Con: SupClass(int i , int j)");
    }
}


class SubCon2{
    public static void main(String[] args){
        new SubClass();
        new SubClass(1);
        new SubClass(1, 2);

    }
}