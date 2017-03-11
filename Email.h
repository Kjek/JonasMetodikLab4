#ifndef EMAIL_H
#define EMAIL_H
#include <string>
#include <iostream>

class Email
{
public:
	friend struct CompWhoDateSubject;
	friend struct CompDateWhoSubject;
	friend struct CompSubjectWhoDate;
	Email();
	Email(std::string who, std::string date, std::string subject);
	friend std::ostream &operator <<(std::ostream &output, const Email& email);
private:
	std::string who;
	std::string date;
	std::string subject;
};

struct CompWhoDateSubject 
{
	bool operator()(Email& lhs, Email& rhs) const 
	{
		if(lhs.who == rhs.who)
			if(lhs.date == rhs.date)
				return lhs.subject < rhs.date;
			else
				return lhs.date < rhs.date;
		else
			return lhs.who < rhs.who;	
	}
};
struct CompDateWhoSubject
{
	bool operator()(Email& lhs, Email& rhs) const
	{
		if(lhs.date == rhs.date)
			if(lhs.who == rhs.who)
				return lhs.subject < rhs.subject;
			else
				return lhs.who < rhs.who;
		else
			return lhs.date < rhs.date;
	}
};
struct CompSubjectWhoDate
{
	bool operator()(Email& lhs, Email& rhs) const
	{
		if(lhs.subject == rhs.subject)
			if(lhs.who == rhs.who)
				return lhs.date < rhs.date;
			else
				return lhs.who < rhs.who;
		else
			return lhs.subject < rhs.subject;
	}
};
#endif /* EMAIL_H */

