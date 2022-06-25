# Software

## Software requirements  

### Software or Libraries to Download

  1. [Arduino IDE](https://www.arduino.cc/en/software)
  2. [Main Code](./Code/)
  3. [M5StickC](https://github.com/m5stack/M5StickC)
  4. [SparkFun_Qwiic_GPIO_Library](https://github.com/sparkfun/SparkFun_Qwiic_GPIO_Library)
  5. [ESP32-BLE-Keyboard](https://github.com/T-vK/ESP32-BLE-Keyboard)


## Software Setup Process

### Debuggers and Compilers Setup Process

  1. Download the [Arduino IDE](https://www.arduino.cc/en/software) executable installation file suitable for your OS.
  2. Double click on the executable file to Install the **Arduino IDE**.
  3. Open and start the **Arduino IDE**.
  4. Go to **File > Preferences**.
  5. Add following link as a new line under **Additional Board Manager URLs** : https://m5stack.oss-cn-shenzhen.aliyuncs.com/resource/arduino/package_m5stack_index.json
  6. Restart the **Arduino IDE**
  7. Open the **Boards Manager** option from the **Tools > Board** menu and install **M5Stack by M5Stack official**
  8. Wait until the IDE finishes installing the cross-compiling toolchain and tools associated with Board Support Package. This may take few minutes.
  9. That’s it! The installation of **Arduino IDE** and the Board Support Packages is completed.

### Main Code Setup Process

  1. Visit the **M5StickC** library github repository page.
  2. Click on **Code > Download Zip** to download **M5StickC**.
  3. Extract **M5StickC-master.zip** file
  4. Rename **M5StickC-master** folder to **M5StickC** folder under **M5StickC-master** subdirectory. 
  5. Copy or move **M5StickC** folder to Arduino installation library subdirectory. As an example: This is found under **C:\Program Files (x86)\Arduino\libraries in windows 10**.
  6. Visit the **SparkFun_Qwiic_GPIO_Library** library github repository page.
  7. Click on **Code > Download Zip** to download **SparkFun_Qwiic_GPIO_Library**.
  8. Extract **SparkFun_Qwiic_GPIO_Library-master.zip** file
  9. Rename **SparkFun_Qwiic_GPIO_Library-master** folder to **SparkFun_Qwiic_GPIO_Library** folder under **SparkFun_Qwiic_GPIO_Library-master** subdirectory. 
  10. Copy or move **SparkFun_Qwiic_GPIO_Library** folder to Arduino installation library subdirectory. As an example: This is found under **C:\Program Files (x86)\Arduino\libraries in windows 10**.
  11. Visit the **ESP32-BLE-Keyboard** library github repository page.
  12. Click on **Code > Download Zip** to download **ESP32-BLE-Keyboard**.
  13. Extract **ESP32-BLE-Keyboard-master.zip** file
  14. Rename **ESP32-BLE-Keyboard-master** folder to **ESP32-BLE-Keyboard** folder under **ESP32-BLE-Keyboard-master** subdirectory. 
  15. Copy or move **ESP32-BLE-Keyboard** folder to Arduino installation library subdirectory. As an example: This is found under **C:\Program Files (x86)\Arduino\libraries in windows 10**.
  16. Visit the **Qwiic_BLE_Switch_Interface_Software.ino** raw source code file under Code directory.
  17. Right click on the source code or any place on this page and select **Save Page As…**
  18. Select the directory you would like to save the software in your computer. 
  19. Change File name from **Qwiic_BLE_Switch_Interface_Software** to **Qwiic_BLE_Switch_Interface_Software.ino**
  20. Change **Save as type** to **All Files**.
  21. Click on **Save** button.
  22. Visit the **Free_Fonts.h** raw source code file under Code directory.
  23. Right click on the source code or any place on this page and select **Save Page As…**
  24. Select the directoryyou selected in step 3.
  25. Click on **Save** button.
  26. Open the directory you selected in step 3.
  27. Double left click or open **Qwiic_BLE_Switch_Interface_Software** file
  28. **Arduino IDE** will ask your permission to create a new sketch folder named **Qwiic_BLE_Switch_Interface_Software** and move **Qwiic_BLE_Switch_Interface_Software.ino** under this folder.
  29. Click on the **Ok** button. 
  30. **Arduino IDE** should now open the **Qwiic_BLE_Switch_Interface_Software.ino** file automatically.
  31. Select the Board under **Tools > Board > M5Stick Arduino Boards** as **M5Stick-C**
  32. Select the correct port number under **Tools > Port** which should show COM XX (M5StickC) 
  33. Press the **Verify** button to make sure there is no problem with the software and libraries. 
  34. Press **Upload** button 


