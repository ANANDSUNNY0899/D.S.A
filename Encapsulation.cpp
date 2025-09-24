#include<iostream>
#include<string>

class BankAccount {
    private:
    std:: string accountNumber;
    double balance;

    public:
    BankAccount(std::string accNum, double initialBalance){
        accountNumber = accNum;
        if(initialBalance>=0){
            balance = initialBalance;
        }else{
            balance=0;
        }
        std::cout<<"Account"<< accountNumber<< "create with balance "<<balance<<std::endl;
    }

    std::string getAccountNumber() const{
        return accountNumber;

    }
    double getBalance() const {
        return balance;
    }
    void deposit(double amount){
        if(amount>0){
            balance += amount;
            std::cout<<"Deposit "<< amount << ". New balance" <<std::endl;
        }else{
            std::cout<<"Deposit amount must be positive. "<<std::endl;
        }
    }

    void withdraw(double amount){
        if(amount> 0 && balance>=amount){
            balance-=amount;
            std::cout<<"withdraw"<< amount << ".new balance: "<< balance<<std::endl;
        }else if(amount<=0){
            std::cout<< "Withdraw amount must be positive ."<< std::endl;
        }else{
            std::cout<<"Insufficinet balance for withdraw." <<std::endl;
        }
    }
};

int main(){
    BankAccount myAccount("ACC1234", 1000.0);

    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    std::cout<<"Final balance for"<< myAccount.getAccountNumber()<<": "<< myAccount.getBalance()<<std::endl;

    myAccount.withdraw(200.0);
    return 0;
}