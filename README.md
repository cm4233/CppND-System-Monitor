# Linux System Monitor
This project provides a text-based graphical output in the terminal to monitor system processes on Linux. The ncurses library facilitates the display output.

<img src="run.png" width="873" height="632" />

## Install Dependencies
```
sudo apt-get install libncurses5-dev libncursesw5-dev
```
## Compilation and Execution
```
cd src
g++ *.cpp -lncurses
./a.out
```
