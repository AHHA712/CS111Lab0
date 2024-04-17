# A Kernel Seedling
TODO: It gives information about kernel module

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

Report which kernel release version you tested your module on
(hint: use `uname`, check for options with `man uname`).
It should match release numbers as seen on https://www.kernel.org/.

```shell
uname -r -s -v
```
TODO: kernel ver?
Darwin 23.0.0 Darwin Kernel Version 23.0.0: Fri Sep 15 14:42:57 PDT 2023; root:xnu-10002.1.13~1/RELEASE_ARM64_T8112