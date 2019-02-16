#include <radio.h>

#include <quad_remote.h>      // Header file with pin definitions and setup

void knobs_update();
void knobs_pressed();
void btn1_pressed(bool);
void btn2_pressed(bool);

void btn_up_pressed(bool down);
void btn_down_pressed(bool down);
void btn_left_pressed(bool down);
void btn_right_pressed(bool down);
void btn_center_pressed(bool down);

void setup() {
     const int SERIAL_BAUD = 9600 ;        // Baud rate for serial port 
     Serial.begin(SERIAL_BAUD);           // Start up serial
     delay(100);
     quad_remote_setup();

     // The buttons and the knob trigger these call backs.       
     knobs_update_cb = knobs_update; 
     knob1_btn_cb = knob_pressed;
     btn1_cb = btn1_pressed;
     btn2_cb = btn2_pressed;
     btn_up_cb =  btn_up_pressed;
     btn_down_cb = btn_down_pressed;
     btn_left_cb =  btn_left_pressed;
     btn_right_cb = btn_right_pressed;
     btn_center_cb =  btn_center_pressed;
     
     knobs_update(); // Initialize the knob
}

void loop() {
}

void knobs_update() {
     Serial.print("Knob: ");
     Serial.println(knob1.getCurrentPos());
}


void btn1_pressed(bool down) {
    if(down) {
        Serial.println("btn1 down");
    } else {
    Serial.println("btn1 up");    
    }
}

void btn2_pressed(bool down) {
    if(down) {
        Serial.println("btn2 down");
    }else {
    Serial.println("btn2 up");    
 }
}

void knob_pressed(bool down) {
    if(down) {
        Serial.println("knob down");
    }else {
    Serial.println("knob up");    
 }
}


void btn_up_pressed(bool down) {
    if(down) {
        Serial.println("up down");
    } else {
    Serial.println("up up");    
  }
}

void btn_down_pressed(bool down) {
    if(down) {
        Serial.println("down down");
    } else {
    Serial.println("down up");    
  }
}

void btn_left_pressed(bool down) {
    if(down) {
        Serial.println("left down");
    } else {
    Serial.println("left up");
    }
}

void btn_right_pressed(bool down) {
    if(down) {
        Serial.println("right down");
    }else {
    Serial.println("right up");    
 }
}

    
void btn_center_pressed(bool down) {
    if(down) {
        Serial.println("center down");
    } else {
    Serial.println("center up");    
  }
}
