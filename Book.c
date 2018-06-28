Book()
{

	web_add_auto_header("DNT", 
		"1");

	lr_think_time(24);

	web_submit_data("purchase.php", 
		"Action=http://blazedemo.com/purchase.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://blazedemo.com/reserve.php", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flight", "Value=9696", ENDITEM, 
		"Name=price", "Value=200.98", ENDITEM, 
		"Name=airline", "Value=Aer Lingus", ENDITEM, 
		"Name=fromPort", "Value=Paris", ENDITEM, 
		"Name=toPort", "Value=London", ENDITEM, 
		LAST);

	lr_think_time(43);

	web_submit_form("confirmation.php", 
		"Snapshot=t8.inf", 
		ITEMDATA, 
		"Name=inputName", "Value=AV", ENDITEM, 
		"Name=address", "Value=123, Main Street", ENDITEM, 
		"Name=city", "Value=London", ENDITEM, 
		"Name=state", "Value=London", ENDITEM, 
		"Name=zipCode", "Value=NE8 2YA", ENDITEM, 
		"Name=cardType", "Value=Visa", ENDITEM, 
		"Name=creditCardNumber", "Value=1234567890", ENDITEM, 
		"Name=creditCardMonth", "Value=11", ENDITEM, 
		"Name=creditCardYear", "Value=2019", ENDITEM, 
		"Name=nameOnCard", "Value=AV", ENDITEM, 
		"Name=rememberMe", "Value=<OFF>", ENDITEM, 
		LAST);

	return 0;
}