#include <WiFi.h>
#include <PubSubClient.h>
#include <Servo.h>

// WiFi credentials (changed from const char* to char[])
char ssid[] = "Gizmodo-hill-clan";
char password[] = "Cocoland01!";

// MQTT Broker settings
const char* mqtt_broker = "10.10.0.105"; // Change this to your computer's IP address on your network
char send_topic[100];
char receive_topic[100];
const char* turnout_base = "track/turnout/";

const char* mqtt_username = "wdmrc_mqtt"; // Not needed unless you configure security
const char* mqtt_password = "wdmrcbnsf"; // Not needed unless you configure security

WiFiClient espClient;
PubSubClient client(espClient);
Servo myservo;

// Servo angle positions
int leftPosition = 85;
int rightPosition = 125;

void setup() {
  myservo.attach(17); // PWM pin where the servo is connected
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Connecting to WiFi..");
  }
  Serial.println("Connected to WiFi");

  client.setServer(mqtt_broker, 1883);
  client.setCallback(callback);

  // Subscribe to a specific turnout, example turnout 1
  sprintf(send_topic, "%ssend/1", turnout_base);
  sprintf(receive_topic, "%sreceive/1", turnout_base);

  while (!client.connected()) {
    if (client.connect("NodeMCU32", mqtt_username, mqtt_password)) {
      Serial.println("Connected to MQTT Broker!");
      client.subscribe(receive_topic);
    } else {
      Serial.print("Failed to connect to MQTT Broker: ");
      Serial.print(client.state());
      delay(2000);
    }
  }
}

void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived in topic: ");
  Serial.println(topic);

  Serial.print("Message:");
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
  }
  Serial.println();
  Serial.println("-----------------------");

  // Convert payload to string and then to integer
  String messageTemp;
  for (int i = 0; i < length; i++) {
    messageTemp += (char)payload[i];
  }
  
  if (messageTemp == "left") {
    myservo.write(leftPosition); // Move servo to left position
  } else if (messageTemp == "right") {
    myservo.write(rightPosition); // Move servo to right position
  } else {
    int pos = messageTemp.toInt();
    myservo.write(pos); // Assume direct position command
  }
}

void loop() {
  client.loop();
}
