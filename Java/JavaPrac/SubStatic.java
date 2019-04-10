class SuperClass{
    protected static int count = 0;
    public SuperClass(){
        count++;
    }
}

class SubClass extends  SuperClass{
    public void showCount(){
        System.out.println(count);
    }
}

class SubStatic{
    public static void main(String[] args){
        new SuperClass();
        new SuperClass();
        SubClass c = new SubClass();
        c.showCount();
    }
}