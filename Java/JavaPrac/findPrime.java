class FindPrime{
    public static void main(String[] args){
        for (int i = 2; i <= 100; i++){
            boolean isPrime = true;
            if (i == 2){
                System.out.print(i + " ");
            }
            else{
                for (int k = 2; k < i; k++){
                    if (i % k == 0){
                        isPrime = false;
                        break;
                    }
                }
                if (isPrime){
                    System.out.print(i + " ");
                }

            }
        }
    }
}