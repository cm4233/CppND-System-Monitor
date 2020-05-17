# Linux System Monitor
This project provides a text-based graphical output in the terminal to monitor system processes on Linux. The ncurses library facilitates the display output.

<img src="run.png" width="819" height="592" />

## Install dependencies
```
sudo apt-get install libncurses5-dev libncursesw5-dev
```
## Compilation and Execution
```
g++ *.cpp -lncurses
./a.out
```