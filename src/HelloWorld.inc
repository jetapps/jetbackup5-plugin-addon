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
	 * @return void
	 * @throws ValidationException
	 */
	public function validateFields():void {
	}

	/**
	 * @param object $data
	 */
	public function setData(object $data):void {
	}

	/**
	 * @return array
	 */
	public function getData(): array {
	}

	/**
	 * @return string
	 */
	public function setSerializedData(string $data) {
	}

	/**
	 * @param string $directory
	 *
	 * @return string
	 */
	public function getSerializedData(): string {
	}

	/**
	 * @return string[]
	 */
	public function protectedFields(): array {
	}

	/**
	 * @return void
	 */
	public function routineTasks(): void {
	}
}