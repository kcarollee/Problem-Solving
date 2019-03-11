class Test{
    static int num = 1;
    int num2;
    int num3;
    Test (int p, int q){
        num2 = p;
        num3 = q;
    }

    public void show(){
        System.out.println(num2 + " " + num3);
    }
}

class TestExec{
    public static void main(String[] args){
        Test testArr[];
        testArr = new Test[5];
        for (int i = 0; i < 5; i++){
            Test temp = new Test(i+1, i+2);
            testArr[i] = temp;

        }

        for (int i = 0; i < 5; i++){
            testArr[i].show();
        }
    }
}