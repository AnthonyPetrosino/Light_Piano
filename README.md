# Light Piano Music Project

I applied the Max/MSP skills that I learned in my Coding Music class (MUSC 242) and my prior knowledge of Arduino to create an interactive, light-sensitive music generator. It combines the analog input from five photoresistors on a breadboard with audio manipulation in Max/MSP to create a responsive audio environment. Different light levels detected by the photoresistors influence various musical elements, offering an engaging and dynamic experience.

## Demonstration



https://github.com/user-attachments/assets/b93421ed-fd70-4fcd-b75d-365284771f5d



## How It Works

The system is designed to be intuitive and interactive. Each photoresistor influences a specific aspect of the music:

### Photoresistor 1 (A0):
* Controls the amplitude (loudness) of the sound being played from the audio file.
* Higher light levels = louder sound.

### Photoresistor 2 (A1):
* Adjusts the playback speed and direction of the audio file.
* Varying light levels can slow down, speed up, or reverse playback.

### Photoresistor 3 (A2):
* Alters the stereo panning of the sound.
* Shifts the sound to the left or right channel based on light intensity.

### Photoresistor 4 (A3):
* Controls the cutoff frequency of a low-pass filter.
* Higher light levels create a brighter, less muffled sound.

### Photoresistor 5 (A4):
* Maps light levels to musical notes in a predefined scale (e.g., pentatonic or minor).
* Brightness corresponds to pitch changes.

![Light_Piano_Picture](https://github.com/user-attachments/assets/244e0e7d-b9fc-41a1-a998-4c8eecb0282c)

## Future Enhancements
* Add visual feedback (e.g., LEDs) to represent light intensity.
* Implement additional audio effects such as reverb or delay.
* Improve physical stability.
