int is_leap_year (int year)
{
	if(year % 4 == 0 && year % 100 != 0)
		return 1;
	else if(year % 400 == 0)
		return 1;
	else
		return 0;
}
