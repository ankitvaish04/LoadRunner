Search()
{

	lr_start_transaction("02_BlazeDemo_Reserve");

		web_add_header("DNT", 
		"1");

	lr_think_time(8);

	web_submit_data("reserve.php", 
		"Action=http://blazedemo.com/reserve.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://blazedemo.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=fromPort", "Value={P_FromPort}", ENDITEM, 
		"Name=toPort", "Value={P_ToPort}", ENDITEM, 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("02_BlazeDemo_Reserve", LR_AUTO);


	return 0;

	
}
