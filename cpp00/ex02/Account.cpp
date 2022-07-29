// Copyright 2022 decordel

#include "Account.hpp"
#include <iostream>
#include <ctime>

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

// [19920104_091532] index:3;amount:432;created
Account::Account(int initial_deposit) {
    this->_accountIndex = _nbAccounts++;
    this->_amount = initial_deposit;
    _totalAmount += initial_deposit;

    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
}

int  Account::getNbAccounts(void) {
    return _nbAccounts;
}

int  Account::getTotalAmount(void) {
    return _totalAmount;
}

int  Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int  Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

void    Account::_displayTimestamp(void) {
    time_t now = time(0);
    struct tm *timeinfo = NULL;
    char    buf[100];

    time(&now);
    timeinfo = localtime(&now);
    strftime(buf, 100, "[%Y%m%d_%H%M%S] ", timeinfo);
    std::cout << buf;
}

// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void    Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void    Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";

    this->_amount += deposit;
    _totalAmount += deposit;
    this->_nbDeposits++;
    _totalNbDeposits++;

    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}


// [19920104_091532] index:0;p_amount:47;withdrawal:refused
// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;
// nb_withdrawals:1
bool    Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";

    if (withdrawal <= this->_amount) {
        this->_nbWithdrawals++;
        _totalNbWithdrawals++;
        this->_amount -= withdrawal;
        _totalAmount -= withdrawal;

        std::cout << "withdrawal:" << withdrawal << ";";
        std::cout << "amount:" << this->_amount << ";";
        std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return true;
    }
    std::cout << "withdrawal:refused" << std::endl;
    return false;
}

int Account::checkAmount(void) const {
    return (this->_amount > 0);
}

// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void    Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

// [19920104_091532] index:7;amount:8942;closed
Account::~Account(void) {
    _nbAccounts--;

    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
}
