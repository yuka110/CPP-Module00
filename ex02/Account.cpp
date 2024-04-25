/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/22 21:23:54 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/25 06:51:44 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "Account.hpp"

#define RESET "\033[0m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _amount = initial_deposit;
    _nbAccounts++;
    _accountIndex = _nbAccounts - 1;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << _amount << ";created" << std::endl;
    _totalAmount += initial_deposit;
}

Account::Account(){
}

Account::~Account(void){ 
    
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
    return(_nbAccounts);
}

int	Account::getTotalAmount(void)
{
    return(_totalAmount);
}

int	Account::getNbDeposits(void)
{
    return(_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
    return(_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << BLUE <<" accounts:" << getNbAccounts() << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << RESET << std::endl;
}

void	Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
    
}

bool	Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if (checkAmount() < withdrawal)
        std::cout << MAGENTA << "refused" << RESET << std::endl;
    else{
        std::cout << withdrawal;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    }
    return (0);
}

int		Account::checkAmount(void) const
{
    return (_amount);
}

void	Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount;
    std::cout << ";deposit:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void    Account::_displayTimestamp( void )
{
    time_t now = time(0);
    tm *tm = localtime(&now);
    std::cout << "[" << tm->tm_year+1900;
    if (tm->tm_mon + 1 < 10)
        std::cout << "0";
    std::cout << tm->tm_mon + 1;
    if (tm->tm_mday + 1 < 10)
        std::cout << "0";
    std::cout << tm->tm_mday << "_"<< tm->tm_hour + 5 << tm->tm_min + 30 << tm->tm_sec << "]";
    
}