/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janhan <janhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:01:12 by janhan            #+#    #+#             */
/*   Updated: 2023/12/05 20:05:54 by janhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>
class Contact
{
public:
	void	setFristName(std::string fristName);
	void	setLastName(std::string lastName);
	void	setNickName(std::string nickName);
	void	setPhoneNumber(std::string phoneNumber);
	void	setDarkestSecret(std::string darkestSecret);

	const std::string&	getFristName() const ;
	const std::string&	getLastName() const ;
	const std::string&	getNickName() const ;
	const std::string&	getPhoneNumber() const ;
	const std::string&	getDarkestSecret() const ;
private:
	std::string fristName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	char *ptr;
};
#endif
