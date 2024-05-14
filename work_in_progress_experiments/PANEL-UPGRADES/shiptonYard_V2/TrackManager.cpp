#include "TrackManager.h"

// Constructor to initialize all track states to 0
TrackManager::TrackManager() {
  memset(trackStates, 0, sizeof(trackStates));
}

// Update the state of a specific track
void TrackManager::updateTrack(int trackNo, int state) {
  trackStates[trackNo] = state;
}

// Get the state of a specific track
int TrackManager::getTrackState(int trackNo) {
  return trackStates[trackNo];
}
