<?php

//Include this file at the bottom of your settings File.

//Uncomment this and set the domain if you have a sperated domain for admin access, you don't need fast404 check in admin sites
//
//if ($_SERVER['HTTP_HOST'] === 'editorial.mysite.com') {
//  return TRUE;
//}
//

//Set the right path for your module instalation here.
include_once('./sites/all/modules/contrib/fast_404/fast_404.inc');

$conf['fast_404_allow_anon_imagecache'] = TRUE;

$conf['fast_404_exts'] = '/\.(txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp|php|html?|xml)$/i';

//Set the path to this file.
$conf['fast_404_html'] = file_get_contents(dirname(__FILE__) . '/path/to/your/theme/fast_404.html');

$conf['fast_404_path_check'] = TRUE;

$conf['fast_404_url_whitelisting'] = TRUE;

$conf['fast_404_HTML_error_all_paths'] = TRUE;

//Add local scripts if you have it here.
$conf['fast_404_whitelist'] = array(
		'index.php',
		'rss.xml',
		'install.php',
		'cron.php',
		'update.php',
		'xmlrpc.php'
		);

//Add blocked paths here, with a partial string of the path will sufficent.
$conf['fast_404_string_whitelisting'] = array(
		'cdn/farfuture',
		'/advagg_',
		'user',
		'node',
		'file/ajax',
		'content',
		'comments/username',
		//Some samples, remove it 
		'gallery',
		'videos',
		'news',
		'admin',
		'clima',
		'cotizaciones',
		'buscar',
		);

if (fast_404_ext_check() !== TRUE) {
	fast_404_path_check();
}
