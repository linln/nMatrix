struct message_dht11
{
  unsigned long ms;
  int type;
  float voltage;
  float temperature;
  float humidity;
  char* toString(void);
  char* toSendString(void);
  static char buffer[];
};
