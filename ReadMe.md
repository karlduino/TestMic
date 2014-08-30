## TestMic

Arduino sketch to test the [Sparkfun](https://www.sparkfun.com)
electet microphone breakout
\[[sparkfun BOB-09964](https://www.sparkfun.com/products/9964)\]

- Takes average of a bunch of background reading at the beginning
- Then takes mean absolute difference from background (over short
  windows)
- Prints values to Serial
