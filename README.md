# get_next_line

get_next_line reads from a file descriptor and returns one line at a time, preserving the state between calls.
It uses static variables, dynamic memory allocation, and buffer management to handle multiple file descriptors safely.

⚙️ How to Build

```bash

make

Include get_next_line.h in your project and compile with the generated get_next_line.c to use the function.
