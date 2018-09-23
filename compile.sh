#!/bin/bash
docker run -e keymap=ajm -e keyboard=ergodox_ez --rm -v $('pwd'):/qmk:rw edasque/qmk_firmware
