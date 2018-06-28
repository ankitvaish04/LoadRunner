Action()
{

	web_add_auto_header("DNT", 
		"1");

	web_url("blazedemo.com", 
		"URL=http://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	lr_think_time(13);

	web_submit_form("reserve.php", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=fromPort", "Value={from}", ENDITEM, 
		"Name=toPort", "Value={to}", ENDITEM, 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(11);

	web_submit_form("purchase.php", 
		"Ordinal=3", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		LAST);

	lr_think_time(52);

	web_submit_form("confirmation.php", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		"Name=inputName", "Value=AV", ENDITEM, 
		"Name=address", "Value=123 Main St.", ENDITEM, 
		"Name=city", "Value=New York", ENDITEM, 
		"Name=state", "Value=NY", ENDITEM, 
		"Name=zipCode", "Value=110023", ENDITEM, 
		"Name=cardType", "Value=Visa", ENDITEM, 
		"Name=creditCardNumber", "Value=1234567891", ENDITEM, 
		"Name=creditCardMonth", "Value=11", ENDITEM, 
		"Name=creditCardYear", "Value=2020", ENDITEM, 
		"Name=nameOnCard", "Value=AV", ENDITEM, 
		"Name=rememberMe", "Value=<OFF>", ENDITEM, 
		LAST);

	return 0;
}