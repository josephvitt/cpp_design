#include <iostream>
#include <cmath>
#include "account.h"
using namespace std;

double SavingAccount::total = 0;
//SavingAccount类相关成员函数的实现
SavingAccount::SavingAccount(int date,int id,double rate)
:id(id),balance(0),rate(rate),lastDate(date),accumulation(0){
    cout << date << "\t#" << id << " is created" << endl;
}

void SavingAccount::record(int date,double amount){
    accumulation = accumulate(date);
    lastDate = date;
    //保留小数点后两位
    amount = floor(amount*100+0.5)/100;
    balance += amount;
    cout << date << "\t#" << id << "\t" << amount << "\t" << balance << endl;
}

void SavingAccount::settle(int date){
    double interest = accumulate(date) * rate /365;//计算年息
    if(interest != 0){
        record(date,interest);
    }
    accumulation = 0;
}

//存入现金
void SavingAccount::deposit(int date,double amount){
    record(date,amount);
}

void SavingAccount::withdraw(int date,double amount){
        if(amount > getBalance())
            cout << "Error:not enough money" << endl;
        else 
            record(date,-amount);
}

void SavingAccount::show(){
    cout << "#" << id << "\tBalance:" << balance;
}

