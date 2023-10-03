# ESP32 Library Installation

1. Download Arduino IDE 1.8.19 [Download](https://www.arduino.cc/en/software). You can select Windows or MAC version. **Do not forget to download version 1.8.19**
2. Install Arduino IDE 1.8.19
3. In Arduino IDE, go to **File > Preferences**
   
  ![Preferences](https://github.com/AtoanyTec/IoT-TEC-UDD/assets/73314754/ae1dc392-47d9-4d36-a13e-5255427e6edf)
  
5. Enter the following link into the "Additional Board Manager URLs" field:
   `https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json`
7. Click in the"OK" button
   
   ![Prefences_OK](https://github.com/AtoanyTec/IoT-TEC-UDD/assets/73314754/f9087574-3a60-44d1-8e9b-72d1ed5004c4)

   **Note:** if you already have the ESP8266 boards URLs, separate the URLs with a comma
   
9. Open the Boards Manager. Go to **Tools > Board > Boards Manager…**
    
    ![Board_Manager](https://github.com/AtoanyTec/IoT-TEC-UDD/assets/73314754/87d2498d-ceb2-4fbf-9117-37c4b5094fe1)

11. Search for ESP32 and press install button for the **"ESP32 by Espressif Systems"**:
    
    ![Boards_Manager_Menu](https://github.com/AtoanyTec/IoT-TEC-UDD/assets/73314754/b3d5923c-4969-475c-b9ae-bab0bf82ce52)
    
13. Wait for installation
    
    ![ESP32_library](https://github.com/AtoanyTec/IoT-TEC-UDD/assets/73314754/f37879bb-2da1-4598-a1e0-05024ee1bbe7)
    
15. Select the ESP32 board in **Tools > Board >  DOIT ESP32 DEVKIT V1**
    
    ![DOITKIT](https://github.com/AtoanyTec/IoT-TEC-UDD/assets/73314754/967f2be6-e96e-4099-870c-45cd3d194004)
    
17. Select the corresponding port. If you do not see **COM** port, please install [CP210x Windows Drivers](https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers?tab=downloads)
    
    ![PORT](https://github.com/AtoanyTec/IoT-TEC-UDD/assets/73314754/b6eb360a-c36d-4e79-ba3a-51214bc0054b)
    
20. Open the following example file in **File > Examples > WiFi (ESP32) > WiFiScan**
    
    ![wifiscan](https://github.com/AtoanyTec/IoT-TEC-UDD/assets/73314754/640cf33b-9f09-4237-a28f-c8654f44daaf)
    
22. The example sketch will open
    
    ![sketch_open](https://github.com/AtoanyTec/IoT-TEC-UDD/assets/73314754/f4903d0c-d670-4c47-be3d-b3c476b262ee)
    
24. Upload the sketch using the Upload button in the Arduino IDE. After uploading, you should see the **"Done uploading"** message
    
    ![done_uploading](https://github.com/AtoanyTec/IoT-TEC-UDD/assets/73314754/c979409a-db1b-4b68-8311-c604edd4f7cf)
    
26. Open the **Serial Monitor**. You should see the following
    
    ![wifi_scan_result](https://github.com/AtoanyTec/IoT-TEC-UDD/assets/73314754/2956e0e1-ddc9-4be3-a4c1-cd4672658958)
    

















