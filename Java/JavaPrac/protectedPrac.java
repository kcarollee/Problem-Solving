class Super{
    protected static int count = 0;

    public Super(){
        count++;
    }
}

class Sub extends Super {
    public void showCount(){
        System.out.println(count);
    }
}

class protectedPrac{
    public static void main(String[] args){
        Super obj1 = new Super();
        Super obj2 = new Super();

        Sub obj3 = new Sub();
        obj3.showCount();
    }
}