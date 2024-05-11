#include <WiFi.h>
#include <WebSocketsClient.h>
#include <ArduinoJson.h>

#include "sounds.h"

#define AUDIO_PIN 25

WebSocketsClient webSocket;

bool paused = false;
unsigned int last_note = 0;
int active_sound = 0;
int count = 0;
unsigned long previous_time = 0;

void webSocketEvent(WStype_t type, uint8_t *payload, size_t length) {
  JsonDocument doc;

  switch (type) {
    case WStype_DISCONNECTED:
      {
        Serial.printf("[WSc] Disconnected!\n");
      }
      break;
    case WStype_CONNECTED:
      {
        Serial.printf("[WSc] Connected to url: %s\n", payload);
      }
      break;
    case WStype_TEXT:
      {
        Serial.printf("[WSc] get text: %s\n", (char *)payload);
        DeserializationError error = deserializeJson(doc, (char *)payload, length + 1);

        if (error) {
          Serial.print("deserializeJson() failed: ");
          Serial.println(error.c_str());
          return;
        }


        JsonObject state = doc["state"];
        JsonArray segments = state["seg"];
        JsonObject segment = segments[0];

        int effect = segment["fx"];
        bool freeze = segment["frz"];
        bool on = state["on"];

        if (freeze || !on) {
          paused = true;
        } else {
          paused = false;

          if (effect == 44) {
            // Tetrix
            active_sound = 2;
            count = 0;
          } else if (effect == 66) {
            // Fire
            active_sound = 3;
            count = 0;

          } else if (effect == 96) {
            // Rain/Drip
            // TODO: ASSIGN SOUND
            active_sound = 4;
            count = 0;

          } else {
            // Stop music
            paused = true;
          }
        }

        Serial.printf("Now running effect: %i\n", effect);
      }
      break;
    case WStype_BIN:
      {
        Serial.printf("[WSc] get binary length: %u\n", length);

        // send data to server
        // webSocket.sendBIN(payload, length);
      }
      break;
    case WStype_ERROR:
      {
      }
    case WStype_FRAGMENT_TEXT_START:
      {
      }
    case WStype_FRAGMENT_BIN_START:
      {
      }
    case WStype_FRAGMENT:
      {
      }
    case WStype_FRAGMENT_FIN:
      {
      }
      break;
  }
}

void setup() {
  Serial.begin(115200);
  //pinMode(AUDIO_PIN, OUTPUT);
  ledcAttachPin(AUDIO_PIN, 0);

  WiFi.mode(WIFI_STA);  // set ESP in STATION mode
  WiFi.begin("WLED-AP", "wled1234");

  Serial.println("Connecting...");

  while (WiFi.status() != WL_CONNECTED) {
    delay(100);
  }

  Serial.println("Connected");

  webSocket.begin("4.3.2.1", 80, "/ws");
  webSocket.onEvent(webSocketEvent);
  webSocket.setReconnectInterval(5000);

  delay(1);
}

void loop() {
  webSocket.loop();

  unsigned long prev_time = previous_time;
  unsigned long current_time = millis();

  if (paused) {
    noTone(AUDIO_PIN);
    return;
  }

  if (active_sound == 1) {
    // Pirates
    if (count >= pirate_note_count) {
      active_sound = 0;
      return;
    }

    unsigned long time_delay = count == 0 ? 0 : pirate_delays[count - 1];

    if (current_time >= prev_time + time_delay) {
      noTone(AUDIO_PIN);
      tone(AUDIO_PIN, pirate_notes[count], pirate_delays[count]);
      previous_time = current_time;
      count++;
    }

  } else if (active_sound == 2) {
    // Tetris
    if (count >= tetris_note_count) {
      active_sound = 0;
      return;
    }

    unsigned long time_delay = count == 0 ? 0 : tetris_delays[count - 1];

    if (current_time >= prev_time + time_delay) {
      noTone(AUDIO_PIN);
      tone(AUDIO_PIN, tetris_notes[count], tetris_delays[count]);
      previous_time = current_time;
      count++;
    }

  } else if (active_sound == 3) {
    // Game of Thrones
    if (count >= game_note_count) {
      active_sound = 0;
      return;
    }

    unsigned long time_delay = count == 0 ? 0 : game_delays[count - 1];

    if (current_time >= prev_time + time_delay) {
      noTone(AUDIO_PIN);
      tone(AUDIO_PIN, game_notes[count], game_delays[count]);
      previous_time = current_time;
      count++;
    }

  } else if (active_sound == 4) {
    // Gravity Falls
    if (count >= gravity_note_count) {
      active_sound = 0;
      return;
    }

    unsigned long time_delay = count == 0 ? 0 : gravity_delays[count - 1];

    if (current_time >= prev_time + time_delay) {
      noTone(AUDIO_PIN);
      tone(AUDIO_PIN, gravity_notes[count], gravity_delays[count]);
      previous_time = current_time;
      count++;
    }

  } else if (active_sound == 5) {
    // Take Me Home
    if (count >= home_note_count) {
      active_sound = 0;
      return;
    }

    unsigned long time_delay = count == 0 ? 0 : home_delays[count - 1];

    if (current_time >= prev_time + time_delay) {
      noTone(AUDIO_PIN);
      tone(AUDIO_PIN, home_notes[count], home_delays[count]);
      previous_time = current_time;
      count++;
    }
  } else {
    noTone(AUDIO_PIN);
  }
}
