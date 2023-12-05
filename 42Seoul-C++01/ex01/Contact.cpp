/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janhan <janhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:04:07 by janhan            #+#    #+#             */
/*   Updated: 2023/12/05 20:05:57 by janhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"
#include <string>
#include <type_traits>



void	Contact::setFristName(std::string fristName)
{
	this->fristName = fristName;
}
void	Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}
void	Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}
void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

const std::string& Contact::getFristName() const
{
	return this->fristName;
}
const std::string& Contact::getLastName() const
{
	return this->lastName;
}
const std::string& Contact::getNickName() const
{
	return this->nickName;
}
const std::string& Contact::getPhoneNumber() const
{
	return this->phoneNumber;
}
const std::string& Contact::getDarkestSecret() const
{
	return this->darkestSecret;
}
