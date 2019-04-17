class Super {
    public void foo() {
        System.out.println("Hello");
    }
}

class Sub extends Super{
    public void foo(){
        super.foo();
        System.out.println("Overriding");
    }
}

class MethodOverriding{
    public static void main(String[] args){
        Super s = new Super();
        Super m = new Sub();
        Sub n = new Sub();

        s.foo();
        n.foo();
        m.foo();
    }
}