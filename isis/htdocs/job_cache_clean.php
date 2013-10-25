<?php
/**
* @package Isis
* @copyright Copyright (C) 2008 Kodeware. All rights reserved.
* @license http://www.gnu.org/copyleft/lgpl.html GNU/LGPL, see LICENSE.php
* This program is free software; you can redistribute it and/or modify it under 
* the terms of the GNU Lesser General Public License as published by the Free Software
* Foundation; either version 2 of the License, or (at your option) any later
* version.

* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
* FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

* You should have received a copy of the GNU Lesser General Public License along with
* this program; if not, write to the Free Software Foundation, Inc., 59 Temple
* Place - Suite 330, Boston, MA 02111-1307, USA, or go to
* http://www.gnu.org/copyleft/lesser.txt.
*/

defined( '_VALID_ISIS' ) or die( 'Direct Access to this location is not allowed.' );

function job_cache_clean_run()
{
	$now = time();
	
	foreach(portalsList() as $portal)
	{		
		foreach(portalFileList($portal, "cache_data") as $file)
		{
			message("info", "Cache data '" . $file . "' deleted.");
			unlink($file);								
		}
		
		foreach(portalFileList($portal, "cache_info") as $file)
		{
			message("info", "Cache info '" . $file . "' deleted.");
			unlink($file);								
		}
	}
	
	return true;
}

function job_cache_clean_view()
{
	return "Cleaning all caches.";
}

?>