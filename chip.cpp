void setup() {
  Serial.begin(115200);
  Serial.print("Chip Model: ");
  Serial.println(ESP.getChipModel());

  Serial.print("Chip Cores: ");
  Serial.println(ESP.getChipCores());
}

void loop() {
}
