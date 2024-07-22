#include <stdio.h>
#include <string.h>

char tracks[][80] = {
  "One less lonely girl",
  "Baby",
  "Something",
  "More like baby"
};

void find_track(char find_for[]){
  int i;
  for (i = 0; i < 4; i++) {
    if (strstr(tracks[i], find_for)) {
      printf("Track %i: %s\n", i + 1, tracks[i]);
    }
  }
}

int main() {
  char some[80];
  printf("Please enter the name of the song you wanna listen to: ");
  fgets(some, 80, stdin);
  some[strcspn(some, "\n")] = '\0'; // Remove the newline character
  find_track(some);
  return 0;
}
