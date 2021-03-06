#ifndef Program_h
#define Program_h

#define TIMER 0
#define TEMPERATURE 1
#define L 1
#define G 2

struct Event {
  int type;
  int hours;
  int minutes;
  int seconds;
  int compare;
  int temperature;
  String* data;
  int length;
};

struct Program {
  String name;
  int length;
  Event* events;
};

#endif

