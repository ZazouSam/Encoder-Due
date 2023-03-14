#include <Wire.h>
#include "Encoder_Custom.h"

void requestEvent()
{
     switch (Enc1)
    {
    case 1:
        Wire.write(0x1E);
        Enc1 = 0;
        break;
    case -1:
        Wire.write(0x1F);
        Enc1 = 0;
        break;
    default:
        Wire.write(0xE1);
        break;
    }
    switch (Enc2)
    {
    case 1:
        Wire.write(0x2E);
        Enc2 = 0;
        break;
    case -1:
        Wire.write(0x2F);
        Enc2 = 0;
        break;
    default:
        Wire.write(0xE2);
        break;
    }
    switch (Enc3)
    {
    case 1:
        Wire.write(0x3E);
        Enc3 = 0;
        break;
    case -1:
        Wire.write(0x3F);
        Enc3 = 0;
        break;
    default:
        Wire.write(0xE3);
        break;
    }
    switch (Enc4)
    {
    case 1:
        Wire.write(0x4E);
        Enc4 = 0;
        break;
    case -1:
        Wire.write(0x4F);
        Enc4 = 0;
        break;
    default:
        Wire.write(0xE4);
        break;
    }
    switch (Enc5)
    {
    case 1:
        Wire.write(0x5E);
        Enc5 = 0;
        break;
    case -1:
        Wire.write(0x5F);
        Enc5 = 0;
        break;
    default:
        Wire.write(0xE5);
        break;
    }
    switch (Enc6)
    {
    case 1:
        Wire.write(0x6E);
        Enc6 = 0;
        break;
    case -1:
        Wire.write(0x6F);
        Enc6 = 0;
        break;
    default:
        Wire.write(0xE6);
        break;
    }
    switch (bouton)
    {
    case 6:
        Wire.write(0xB1);
        bouton = 0;
        break;
    case 5:
        Wire.write(0xB2);
        bouton = 0;
        break;
    case 4:
        Wire.write(0xB3);
        bouton = 0;
        break;
    case 3:
        Wire.write(0xB4);
        bouton = 0;
        break;
    case 2:
        Wire.write(0xB5);
        bouton = 0;
        break;
    case 1:
        Wire.write(0xB6);
        bouton = 0;
        break;
    default:
        Wire.write(0xEE);
        break;
    }
}