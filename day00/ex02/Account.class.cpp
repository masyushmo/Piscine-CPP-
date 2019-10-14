// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Account.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mmasyush <mmasyush@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/10/01 13:25:57 by mmasyush          #+#    #+#             //
//   Updated: 2019/10/01 13:25:57 by mmasyush         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Account.class.hpp"
#include <string>
#include <iostream>
#include <ctime>

Account::Account(int initial_deposit) : _accountIndex( Account::_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    this->_totalAmount = _amount;
    _displayTimestamp(); 
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
    return;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
    return;
}

void	Account::_displayTimestamp(void)
{
    time_t  rawtime;
    struct tm *tinfo = localtime(&rawtime);
    char buff [80];

    time (&rawtime);
    tinfo = localtime (&rawtime);
    strftime (buff, 80, "[%Y%m%d_%H%M%S] ", tinfo);
    std::cout << buff;
    return;
}

int	Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    this->_nbDeposits++;
    Account::_totalNbDeposits++;
    Account::_totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposits:" << deposit << ";amount:" << this->_amount+deposit << ";nb_deposits:" << this->_nbDeposits << std::endl;
    this->_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    this->_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    _displayTimestamp();
    if (withdrawal > this->_amount)
    {
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
        return false;
    }
    else
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount-withdrawal << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    this->_amount -= withdrawal;
    return true;
}
void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int		Account::checkAmount( void ) const
{
    static int check_amount = 0;
    check_amount++;
    std::cout << "function checkAmount was called: " << check_amount << " times!" << std::endl;
    return (this->_amount);
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;