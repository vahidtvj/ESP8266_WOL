#include <ThingerESP8266.h>
#include <WiFiUdp.h>
#include <WakeOnLan.h>

#include "secrets.h"

WiFiUDP UDP;
WakeOnLan WOL(UDP);

ThingerESP8266 thing(SECRET_USERNAME, SECRET_DEVICE_ID, SECRET_DEVICE_CREDENTIAL);

void wakeMyPC()
{
  const char *MACAddress = SECRET_MAC;

  WOL.sendMagicPacket(MACAddress); // Send Wake On Lan packet with the above MAC address. Default to port 9.
                                   // WOL.sendMagicPacket(MACAddress, 7); // Change the port number
}

void setup()
{
  thing.add_wifi(SECRET_SSID, SECRET_SSID_PASSWORD);

  WOL.setRepeat(3, 100);
  thing["Wake Computer"] << [](pson &in) {
    if (in)
      wakeMyPC();
  };
}

void loop()
{
  thing.handle();
}
