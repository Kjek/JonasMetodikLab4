#include "Email.h"

Email::Email()
{
}

Email::Email(std::string who, std::string date, std::string subject)
	:who(who), date(date), subject(subject)
{
}

std::ostream& operator<<(std::ostream& output, const Email& email)
{
	output << "From: " << email.who <<
			"\nDate: " << email.date << 
			"\nSubject: " << email.subject << "\n";
}

