#!/bin/bash

elements="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"

password () {
 pass=$(head /dev/urandom | tr -dc "$elements" | head -c "$1")
 echo "$pass"
}
password $1
