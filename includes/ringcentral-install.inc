<?php 
/**
 * Copyright (C) 2019-2024 Paladin Business Solutions
 *
 */
// check WordPress version requirements
if (version_compare(get_bloginfo('version'),'6.0','<')) {
//     deactivate the  plugin if current WordPress version is less than that noted above
    deactivate_plugins(basename(__FILE__));
    exit("Your WordPress Version is too old for this plugin...") ;
}
?>