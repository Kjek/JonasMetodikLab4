#ifndef MAILBOX_H
#define MAILBOX_H
#include <vector>
#include <cstdlib>
#include <algorithm>
#include "Email.h"

class MailBox
{
public:
	MailBox();
	MailBox(size_t size);
	void sortWho(CompWhoDateSubject compare);
	void sortDate(CompDateWhoSubject compare);
	void sortSubject(CompSubjectWhoDate compare);
	void push(Email email);
	
	std::vector<Email>::iterator begin();
	std::vector<Email>::iterator end();
	
private:
	std::vector<Email> vec;
};

#endif /* MAILBOX_H */

