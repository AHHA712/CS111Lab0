# A Kernel Seedling
Intro: Created a module that would count the number of running processes. Below are the command for building that module. 

## Building
```shell
TODO: cmd for build
make
```

## Running
```shell
TODO: cmd for running binary
sudo insmod proc_count.ko
```
TODO: results?
sudo insmod proc_count.ko

## Cleaning Up
```shell
TODO: cmd for cleaning the built binary
make clean
```

## Testing
```python
python -m unittest
```
TODO: results?
number expected

Report which kernel release version you tested your module on
(hint: use `uname`, check for options with `man uname`).
It should match release numbers as seen on https://www.kernel.org/.

```shell
uname -r -s -v
```
TODO: kernel ver?
Linux 5.14.8-arch1-1 #1 SMP PREEMPT Sun, 26 Sep 2021 19:36:15
