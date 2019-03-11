class Array{
    public static void main(String args[]){
        int month_days[];
        String str = "testing string";
        int i = 0;
        month_days = new int[12];
        for (int x = 0; x < 12; x++){
            month_days[x] = i;
            i++;
        }

        for (int x = 0; x < 12; x++){
            System.out.println(month_days[x]);
        }
        System.out.println(str);

    }
}