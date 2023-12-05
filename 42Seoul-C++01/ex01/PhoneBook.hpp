#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
public:
	Phonebook();
private:
	Contact	_contacts[8];
	int		_index;
	int		_count;
private:
	void	_print_value(std::string str);
	void	_print_contact(int	index);

}

#endif
