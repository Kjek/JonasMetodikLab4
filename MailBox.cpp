#include <iostream>
#include "MailBox.h"


MailBox::MailBox()
{
}

MailBox::MailBox(size_t size)
	:vec(size)
{
}
	
void MailBox::sortWho(CompWhoDateSubject compare)
{
	//Email::CompWhoDateSubject compare;
	std::sort(vec.begin(), vec.end(), compare);
}

void MailBox::sortDate(CompDateWhoSubject compare)
{
	std::sort(vec.begin(), vec.end(), compare);
}

void MailBox::sortSubject(CompDateWhoSubject compare)
{
	std::sort(vec.begin(), vec.end(), compare);
}

void MailBox::push(Email email)
{
	vec.push_back(email);
}

std::vector<Email>::iterator MailBox::begin()
{
	return vec.begin();
}

std::vector<Email>::iterator MailBox::end()
{
	return vec.end();
}