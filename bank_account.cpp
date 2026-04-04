#include<iostream>
class BankAccount{
    protected:
    double balance;
    public:
    BankAccount(double bal){
        balance = bal;
    }

    void deposit(double amt){
        balance += amt;
    }
    void withdraw(double amt){
        if(amt <= balance){
            balance -= amt;
        }
        else{
            std::cout<<"Insufficient balance"<<std::endl;
        }
    }
    void checkBalance(){
        std::cout<<"Balance: "<<balance<<std::endl;
    }
};
class savingacc : public BankAccount{
    public:
    savingacc(double bal) : BankAccount(bal){}
    void intRate(){balance += balance * 0.05;}
};
class currentacc : public BankAccount{
    public:
    currentacc(double bal) : BankAccount(bal){}
    void intRate(){balance += balance * 0.02;}
};

int main(){
    savingacc s1(1000);
    s1.checkBalance();
    s1.deposit(500);
    s1.checkBalance();
    s1.intRate();
    s1.checkBalance();
    s1.withdraw(200);
    s1.checkBalance();

    return 0;
}