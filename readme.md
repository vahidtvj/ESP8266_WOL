# ESP8266_WOL
>Wake any computer on your network from your [thinger.io](https://console.thinger.io/) console

[![license](https://img.shields.io/github/license/vahidtvj/esp8266_wol)](https://github.com/vahidtvj/ESP8266_WOL/blob/master/LICENSE)

## Setup
*  Install [`thinger.io`](https://docs.thinger.io/quick-sart/devices/arduino#installation) and [`WakeOnLan`](https://www.arduino.cc/reference/en/libraries/wakeonlan/) from arduino library manager
*  Also install [ESP8266Ping](https://github.com/vahidtvj/ESP8266_WOL)
*  Create an account at [thinger.io](https://thinger.io/) 
*  Add a new device on thinger console 
*  Create a `secrets.h` file from example and fill in the blanks
*  Compile and flash your *ESP8266*
*  Once running you can access wake command on thinger dashboard or mobile app

Make sure to configure your PC to be able to start on a magic packet. I used [*this*](https://forum-en.msi.com/faq/article/wake-on-lan-wol) tutorial