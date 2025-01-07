# Light Piano Music Project

I applied the Max/MSP skills that I learned in my Coding Music class (MUSC 242) and my prior knowledge of Arduino to create an interactive, light-sensitive music generator. It combines the analog input from five photoresistors on a breadboard with audio manipulation in Max/MSP to create a responsive audio environment. Different light levels detected by the photoresistors influence various musical elements, offering an engaging and dynamic experience.

## Demonstration
[Demo Video](Light_Piano/assets/Light_Piano_Video.mp4)
https://github.com/username/repository-name/blob/main/assets/Light_Piano_Video.mp4

## How It Works

The system is designed to be intuitive and interactive. Each photoresistor influences a specific aspect of the music:

### Photoresistor 1 (A0):
Controls the amplitude (loudness) of the sound being played from the audio file.
Higher light levels = louder sound.

### Photoresistor 2 (A1):
Adjusts the playback speed and direction of the audio file.
Varying light levels can slow down, speed up, or reverse playback.

### Photoresistor 3 (A2):
Alters the stereo panning of the sound.
Shifts the sound to the left or right channel based on light intensity.

### Photoresistor 4 (A3):
Controls the cutoff frequency of a low-pass filter.
Higher light levels create a brighter, less muffled sound.

### Photoresistor 5 (A4):
Maps light levels to musical notes in a predefined scale (e.g., pentatonic or minor).
Brightness corresponds to pitch changes.

[Device Image](assets/Light_Piano_Picture.mp4)

## Future Enhancements
Add visual feedback (e.g., LEDs) to represent light intensity.
Implement additional audio effects such as reverb or delay.
Improve physical stability.
