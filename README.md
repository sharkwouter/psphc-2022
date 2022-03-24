# PSPHC 2022 Presentation Example

This example can be build for the PSP using PSPDEV toolchain. Download the latest release [here](https://github.com/pspdev/pspdev/releases/tag/latest). Extract it and set the environment variable ``PSPDEV`` to the full path of the resulting pspdev directory. Then add ``${PSPDEV}/bin`` to your path variable.

Building this code can be done with the following commands:

```
mkdir psp && cd psp
psp-cmake ..
make
```

Then copy the eboot into a directory in psp/game on your PSP memory card to run it.

## Building for Linux

On Linux you can do the following to build this natively:

```
mkdir build && cd build
cmake ..
make
```

It can then be run with ``./square``.

## License

This code is licensed under the unlicense. Use it for whatever you like without worrying about what I think about it or mentioning me. It's just a small example anyway.