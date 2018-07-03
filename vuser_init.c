/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 911
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_add_header("DNT", 
		"1");

lr_start_transaction("01_BlazeDemo_HomePage");

			web_url("blazedemo.com", 
		"URL=http://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);


	lr_end_transaction("01_BlazeDemo_HomePage", LR_AUTO);

	web_set_sockets_option("SSL_VERSION", "2&3");

	return 0;
}
