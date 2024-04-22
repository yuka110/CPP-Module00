/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/22 21:23:54 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/22 22:02:50 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _totalAmount = initial_deposit;
}

Account::Account(){
}

Account::~Account(void){ 
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
    return(_nbDeposits);
}

int	Account::getNbWithdrawals(void)
{
    return(_nbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
    std::cout << "[";
     _displayTimestamp();
    std::cout << "] index:" << _accountIndex;
    std::cout << ";amount:" << _amount << ";created" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
    
}

bool	Account::makeWithdrawal(int withdrawal);
{
    
}

int		Account::checkAmount(void) const
{
    
}

void	Account::displayStatus(void) const
{
    
}

void    Account::_displayTimestamp( void )
{
    
}