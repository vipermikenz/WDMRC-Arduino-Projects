// startup_settings.h

#ifndef STARTUP_SETTINGS_H
#define STARTUP_SETTINGS_H

#include <ArduinoJson.h>

// Adjust the size according to your JSON content
StaticJsonDocument<256> predefinedSettings;

const char* defaultSettingsJson = R"(
{
  "buttonStates": [false, false, false, false, false, false, false, false]
}
)";

void loadDefaultSettings() {
  DeserializationError error = deserializeJson(predefinedSettings, defaultSettingsJson);
  if (error) {
    Serial.print("Default settings parsing error: ");
    Serial.println(error.c_str());
  }
}

#endif // STARTUP_SETTINGS_H
