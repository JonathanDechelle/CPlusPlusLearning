#pragma once

#include <string>

class Person
{
public:
	Person(std::string aFirst, std::string aLast, int aArbitraryNumber);
	~Person(void);

private:
	std::string m_FirstName;
	std::string m_LastName;
	int m_ArbitraryNumber;
};

