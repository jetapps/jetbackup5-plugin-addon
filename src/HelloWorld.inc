<?php
/*
*
* JetBackup @ package
* Created By Idan Ben-Ezra
*
* Copyrights @ JetApps
* https://www.jetapps.com
*
**/
namespace JetBackup\Core\Addon\HelloWorld;

use JetBackup\Core\Addon\Integration\Addon;
use JetBackup\Core\Exception\ValidationException;

defined( '__JETBACKUP__' ) or die( 'Restricted access' );

class HelloWorld implements Addon {

	/**
	 * Validate all destination fields - throw ValidationException on error
	 *
	 * @throws ValidationException
	 */
	public function validateFields() {
	}

	/**
	 * @param object $data
	 */
	public function setData($data) {
	}

	/**
	 * @return array
	 */
	public function getData(): array {
	}

	/**
	 * @return string
	 */
	public function setSerializedData($data) {
	}

	/**
	 * @param string $directory
	 *
	 * @return bool
	 */
	public function getSerializedData(): string {
	}
}