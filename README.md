# hgic_ah_fmac
Just a mirror to bypass the registration wall of Huge-IC's FullMAC 802.11ah (HaLow) Wireless Driver.   
Current version: ```v2.2.1_26364```

## Intergrate to OpenIPC
See [my branch of OpenIPC](https://github.com/libc0607/openipc-firmware)  
Set  ```BR2_PACKAGE_HGIC_FMAC_OPENIPC``` in your board's defconfig.  
You'll also need ```BR2_PACKAGE_HGIC_AHTOOLS``` for low-level controls.

## Configuration
See ```泰芯Linux_WiFi_FMAC驱动开发指南.pdf``` (zh-cn warning  

## Disclaimer
This is **NOT** the official driver release.   
Since [the official website](https://www.taixin-semi.com/Product?prouctSubClass=33) needs users to register & login to download the driver.  
I just downloaded it and re-uploaded it here with the firmware which can be found in another .zip file (泰芯AH开发板固件.zip) and some minor Makefile changes to make it easier to integrate into the OpenIPC buildroot.   
