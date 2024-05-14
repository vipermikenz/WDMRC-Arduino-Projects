#ifndef TrackManager_h
#define TrackManager_h

#include <Arduino.h>

// Class to manage track states for various functions
class TrackManager {
  private:
    int trackStates[10]; // Array to hold the state of each track

  public:
    TrackManager();
    void updateTrack(int trackNo, int state); // Update the state of a track
    int getTrackState(int trackNo); // Retrieve the state of a track
};

#endif
