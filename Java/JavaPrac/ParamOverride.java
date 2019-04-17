class Super{
    public int size;
    public Super(int size){
        this.size = size;
    }
    public void show(){
        System.out.println("Super size: " + size);
    }
}

class Sub extends Super{
    public int size;

    public Sub (int size1, int size2){
        super(size1);
        this.size = size2;
    }

    public void show(){
        System.out.println("Super size: " + super.size);
        System.out.println("Sub size: " + this.size);
    }
}

class ParamOverride{
    public static void main(String[] args){
        Sub s = new Sub(3, 4);
        Super s2 = s;

        s.show();
        s2.show();
    }
}