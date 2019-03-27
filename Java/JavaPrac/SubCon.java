class Super{
    public Super(){
        System.out.println("Superclass constructor called");
    }
}

class Sub extends Super{
    public Sub(){
        System.out.println("Subclass constructor called");
    }
}

class SubCon{
    public static void main(String[] args){
        Sub s = new Sub();
    }
}