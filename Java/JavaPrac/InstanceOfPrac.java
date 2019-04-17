class Super {
}

class Sub extends Super {

}

class InstanceOfPrac {
    public static void main(String[] args){
        Sub s = new Sub();
        if (s instanceof Super){
            System.out.println("Instance of Super");
        }

        if (s instanceof Sub){
            System.out.println("Instance of Sub");
        }
    }
}