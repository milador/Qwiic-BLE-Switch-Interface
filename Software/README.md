# Software

## Software requirements  

### Software or Libraries to Download

  1. [Arduino IDE](https://www.arduino.cc/en/software)
  2. [Main Code](./Code/)
  3. [M5StickC Plus](https://github.com/m5stack/M5StickC-Plus)
  4. [SparkFun_Qwiic_GPIO_Library](https://github.com/sparkfun/SparkFun_Qwiic_GPIO_Library)
  5. [ESP32-BLE-Keyboard](https://github.com/T-vK/ESP32-BLE-Keyboard)
  6. [StopWatch Library](https://github.com/RobTillaart/Stopwatch_RT)
  7. [EasyMorse Library](https://github.com/milador/EasyMorse)


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

  1. Visit the **M5StickC-Plus** library github repository page.
  2. Click on **Code > Download Zip** to download **M5StickC-Plus**.
  3. Extract **M5StickC-Plus-master.zip** file
  4. Rename **M5StickC-Plus-master** folder to **M5StickC-Plus** folder under **M5StickC-Plus-master** subdirectory. 
  5. Copy or move **M5StickC-Plus** folder to Arduino installation library subdirectory. As an example: This is found under **C:\Program Files (x86)\Arduino\libraries in windows 10**.
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
  16. Visit the **StopWatch** library github repository page.
  17. Click on **Code > Download Zip** to download **StopWatch** library.
  18. Extract **Stopwatch_RT-master.zip** file
  19. Rename **Stopwatch_RT-master** folder to **Stopwatch** folder under **Stopwatch_RT-master** subdirectory. 
  20. Copy or move **Stopwatch** folder to Arduino installation library subdirectory. As an example: This is found under **C:\Program Files (x86)\Arduino\libraries in windows 10**.
  21. Visit the **EasyMorse** library github repository page.
  22. Click on **Code > Download Zip** to download **EasyMorse** library.
  23. Extract **EasyMorse-master.zip** file
  24. Rename **EasyMorse-master** folder to **EasyMorse** folder under **EasyMorse-master** subdirectory. 
  25. Copy or move **EasyMorse** folder to Arduino installation library subdirectory. As an example: This is found under **C:\Program Files (x86)\Arduino\libraries in windows 10**.  
  26. Visit the **Qwiic_BLE_Switch_Interface_Software.ino** raw source code file under Code directory.
  27. Right click on the source code or any place on this page and select **Save Page As…**
  28. Select the directory you would like to save the software in your computer. 
  29. Change File name from **Qwiic_BLE_Switch_Interface_Software** to **Qwiic_BLE_Switch_Interface_Software.ino**
  30. Change **Save as type** to **All Files**.
  31. Click on **Save** button.
  32. Visit the **Free_Fonts.h** raw source code file under Code directory.
  33. Right click on the source code or any place on this page and select **Save Page As…**
  34. Select the directory you selected in step 28.
  35. Click on **Save** button.
  36. Open the directory you selected in step 28.
  37. Double left click or open **Qwiic_BLE_Switch_Interface_Software** file
  38. **Arduino IDE** will ask your permission to create a new sketch folder named **Qwiic_BLE_Switch_Interface_Software** and move **Qwiic_BLE_Switch_Interface_Software.ino** under this folder.
  39. Click on the **Ok** button. 
  40. **Arduino IDE** should now open the **Qwiic_BLE_Switch_Interface_Software.ino** file automatically.
  41. Select the Board under **Tools > Board > M5Stick Arduino Boards** as **M5Stick-C-Plus**
  42. Select the correct port number under **Tools > Port** which should show COM XX (M5StickC-Plus) 
  43. Press the **Verify** button to make sure there is no problem with the software and libraries. 
  44. Press **Upload** button 


