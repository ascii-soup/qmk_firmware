#!/bin/sh
avr-objcopy -I ihex -O binary -R .eeprom -R .fuse -R .lock -R .signature "$1" FLASH.BIN
