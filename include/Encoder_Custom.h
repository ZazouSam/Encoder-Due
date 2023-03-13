#include <Encoder.h>
#include <Bounce2.h>
#define NUM_ENCODERS 6

Encoder encoders[NUM_ENCODERS] = {
    Encoder(25, 23), // Encoder 1 pins
    Encoder(31, 29), // Encoder 2 pins
    Encoder(37, 35), // Encoder 3 pins
    Encoder(43, 41), // Encoder 4 pins
    Encoder(49, 47), // Encoder 5 pins
    Encoder(9, 8),   // Encoder 6 pins
};

// Store the old position of the encoder
long oldPosition1 = -999;
long oldPosition2 = -999;
long oldPosition3 = -999;
long oldPosition4 = -999;
long oldPosition5 = -999;
long oldPosition6 = -999;

// Store the count value
int count1 = 0;
int count2 = 0;
int count3 = 0;
int count4 = 0;
int count5 = 0;
int count6 = 0;

int once1 = 0;
int once2 = 0;
int once3 = 0;
int once4 = 0;
int once5 = 0;
int once6 = 0;

void encoder_zero()
{
    // Set the initial position of the encoder as the old position
    oldPosition1 = encoders[0].read() / 4;
    oldPosition2 = encoders[1].read() / 4;
    oldPosition3 = encoders[2].read() / 4;
    oldPosition4 = encoders[3].read() / 4;
    oldPosition5 = encoders[4].read() / 4;
    oldPosition6 = encoders[5].read() / 4;
}

Bounce debouncer27 = Bounce();
Bounce debouncer33 = Bounce();
Bounce debouncer39 = Bounce();
Bounce debouncer45 = Bounce();
Bounce debouncer51 = Bounce();
Bounce debouncer10 = Bounce();

void encoder_setup(int btnPin1, int btnPin2, int btnPin3, int btnPin4, int btnPin5, int btnPin6)
{
    //pinMode(btnPin1, INPUT);
    debouncer27.attach(btnPin1, INPUT);
    debouncer27.interval(5);
    debouncer33.attach(btnPin2, INPUT);
    debouncer33.interval(5);
    debouncer39.attach(btnPin3, INPUT);
    debouncer39.interval(5);
    debouncer45.attach(btnPin4, INPUT);
    debouncer45.interval(5);
    debouncer51.attach(btnPin5, INPUT);
    debouncer51.interval(5);
    debouncer10.attach(btnPin6, INPUT);
    debouncer10.interval(5);
}
