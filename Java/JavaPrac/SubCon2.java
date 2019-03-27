class SuperClass{
    public SuperClass(){
        System.out.println("SuperClass constructor, no parameters given");
    }
    public SuperClass(int i){
        System.out.println("SuperClass constructor called, 1 parameter given");
    }
    public SuperClass(int i, int j){
        System.out.prinln("SuperClass constructor called, 2 parameters given");
    }
}

class SubClass{
    public SubClass(){
        System.out.println("SubClass constructor, no parameters given");
    }
    public SubClass(int i){
        super(i); // designating and calling superclass constructor
        System.
    }
}
