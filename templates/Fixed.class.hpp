#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
	private:


	public:

		int		getFixed(void) const;
		
		Fixed &	operator=(Fixed const &assign);

		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);

};

#endif
