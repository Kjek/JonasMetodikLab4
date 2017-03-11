#include <cstdlib>
#include <iostream>
#include "MailBox.h"

template <typename T>
void Show(T begin, T end)
{
	for( ; begin != end; ++begin)
	{
		std::cout << *begin << std::endl;
	}
}


int main()
{
	Email a("Anders", "2002-02-28", "lab 1");
    Email b("Anders", "2002-02-28", "lab 2");
	Email c("Anders", "2002-02-27", "lab 2");
	Email d("And", "2002-02-27", "lab 2");
	Email e("And", "2002-02-27", "lab 1");
	Email f("And", "2002-02-26", "lab 1");
	Email g("Per", "2002-02-26", "lab 1");
	MailBox mailbox(3);
	
	mailbox.push(a);
	mailbox.push(b);
	mailbox.push(c);
	mailbox.push(d);
	mailbox.push(e);
	mailbox.push(f);
	mailbox.push(g);
	std::cout << "Sorting after 'Who'...\n";
	mailbox.sortWho((CompWhoDateSubject()));
	Show(mailbox.begin(), mailbox.end());	
	std::cout << "Sorting after 'Date'...\n";
	mailbox.sortDate();
	Show(mailbox.begin(), mailbox.end());	
	std::cout << "Sorting after 'Subject'...\n";
	mailbox.sortSubject();
	Show(mailbox.begin(), mailbox.end());	
	
	
	
	return 0;
}

