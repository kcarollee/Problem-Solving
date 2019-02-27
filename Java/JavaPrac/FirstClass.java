class BankAccount
{
    int balance = 0;
    public int deposit(int amount)
    {
        balance += amount;
        return balance;
    }
    public int withdraw(int amount)
    {
        balance -= amount;
        return balance;
    }
    public int checkMyBalance()
    {
        System.out.println("Amount left: " + balance);
        return balance;
    }
}

class BankAccountExec
{
    public static void main(String[] args)
    {
        BankAccount yoon = new BankAccount();
        BankAccount yoon_2 = yoon;
        BankAccount park = new BankAccount();

        yoon.deposit(5000);
        park.deposit(3000);

        yoon.withdraw(1000);
        park.withdraw(2000);

        yoon.checkMyBalance();
        park.checkMyBalance();
        yoon_2.checkMyBalance();//yoon_2 refers to yoon
        check(yoon_2);//passing a reference as a parameter
    }

    public static void check(BankAccount acc)
    {
        acc.checkMyBalance();
    }
}