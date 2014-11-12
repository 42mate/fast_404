Fast 404 - 42mate Fork

This is a fork of Fast 404 created by 42mate.

To use it.

- Install the module into your site modules.
- Look in config_sample for the fast_404.inc file and copy to the site folder (same as settings.php)
- Edit fast_404.inc with right paths for your module instalation.
- Include with php include ( include dirname(__FILE__) . '/fast_404.inc'; ) the file fast_404.inc.
- Enable fast_404 module.

Test your site, unsual paths to looks if they are denied for fast_404, is so, then add the path into the
withelist in the fast_404.inc file.

If your have a different domain name for administration of the content, you can safely avoid the fast_404 check.
