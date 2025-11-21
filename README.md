# ps1emu

Single-file PlayStation 1 emulator

## Why a single-file design?

It is inspired by [`cnlohr`](https://github.com/cnlohr)'s [`mini-rv32ima` repo](https://github.com/cnlohr/mini-rv32ima). It is intended to be able to be easily ported to other platforms. The no `libc` design will allow porting to platforms like WebAssembly without the need of `Emscripten` or `WASI`.

## How will this need to be used?

Any code that uses this will need to implement all of the drawing functions required by the GPU. I/O like controller input, CD-ROMs, and audio will also need to be implemented. All of these are not required and can be stubbed.

## What about the PlayStation 1's BIOS?

At the current moment, the emulator is not complete. For testing purposes, the original BIOS will be used, but not uploaded to the repository. Once the emulator is in a working state, an open-source BIOS for the PlayStation 1 will be embedded in the emulator header.

## Current Progress

Like nothing.
