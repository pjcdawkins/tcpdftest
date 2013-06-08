<?php
/**
 * @file
 * A configuration file for TCPDF.
 */

/**
  * Installation path (/var/www/tcpdf/).
  */
define ('K_PATH_MAIN', libraries_get_path('tcpdf') . '/');

/**
  * cache directory for temporary files (full path)
  */
if (!file_exists('temporary://tcpdf/cache') && is_writable('temporary://')) {
  $temp_realpath = drupal_realpath('temporary://');
  mkdir('temporary://tcpdf/cache', 0777, TRUE);
  define ('K_PATH_CACHE', drupal_realpath('temporary://tcpdf/cache'));
}
