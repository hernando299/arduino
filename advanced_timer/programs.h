#define TIMER 0
#define TEMPERATURE 1
#define L 1
#define G 2

struct Event {
  int hours;
  int minutes;
  int seconds;
  int compare;
  int temperature;
  String data;
};

struct Program {
  String name;
  int type;
  int length;
  Event* events;
};

Event feta[3] = {
  {0,0,0,0,0,"feta start"},
  {0,0,5,0,0,"feta one"},
  {0,0,10,0,0,"feta finished"}
};

Event brie[6] = {
  {0,0,0,0,0,"brie 1"},
  {0,0,5,0,0,"brie 2"},
  {0,0,10,0,0,"brie 3"},
  {0,0,15,0,0,"brie 4"},
  {0,0,20,0,0,"brie 5"},
  {0,0,25,0,0,"brie 6"},
};

Event yogurt[3] = {
  {0,0,0,L,100,"Put milk in a saucepan, place the temperature probe in the milk and heat on a medium heat."},
  {0,0,0,G,84, "Cool the milk in a water bath."},
  {0,0,0,L,44, "Put milk in jar, add the yogurt culture, mix and place in a warm place for 4-10 hours."}
};

Program programs[3] = {
//| name   | type       | length | events
  {"Feta",   TIMER,       3,       feta},
  {"Brie",   TIMER,       6,       brie},
  {"Yogurt", TEMPERATURE, 3,       yogurt}
};

