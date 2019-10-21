// Serial port class definitions for various devices

#if defined(ARDUINO_MAPLE_MINI)
  #define SERIAL_PORT_CLASS USBSerial
#elif defined(ARDUINO_AVR_PROMICRO) || defined(ARDUINO_AVR_LEONARDO) || defined(ARDUINO_AVR_MICRO) || defined(ARDUINO_AVR_YUN) || defined(ARDUINO_AVR_ESPLORA) || defined(ARDUINO_AVR_LILYPAD_USB) || defined(ARDUINO_AVR_ROBOT_CONTROL) || defined(ARDUINO_AVR_ROBOT_MOTOR) || defined(ARDUINO_AVR_LEONARDO_ETH)
  #define SERIAL_PORT_CLASS Serial_
#elif defined(TEENSYDUINO)
  #define SERIAL_PORT_CLASS usb_serial_class
#else
  #define SERIAL_PORT_CLASS HardwareSerial
#endif
