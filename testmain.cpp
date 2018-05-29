#include <iostream>
#include "./includes/inimanager.h"
#include "./includes/strfuncs.h"

int main()
{
//	INI mini("test.ini",true);
	int total;
	std::string * split = strfuncs::strsplit("PHP=>>>php,php5,php7",total,"=>>>");
	for(int i = 0; i < total; i++)
	{
		std::cout << split[i] << std::endl;
	}
	std::string trimstring = "           This string will be trimmed           ";
	std::cout << strfuncs::trim(trimstring) << std::endl;
	std::string replacestring = "This string might have every 'This' in this string replaced by 'this'";
	replacestring = strfuncs::replace(replacestring,"This","this");
	replacestring = strfuncs::replace(replacestring,"this","This");
	std::cout << replacestring << std::endl;	
	replacestring = strfuncs::remove(replacestring,"This");
	std::cout << replacestring << std::endl;
	replacestring = strfuncs::trim(replacestring);
	std::cout << replacestring << std::endl;
	replacestring = strfuncs::toupper(replacestring);
	std::cout << replacestring << std::endl;
	return 0;
}
