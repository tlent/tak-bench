# Tak Benchmarks

Benchmarking [the Tak function](https://en.wikipedia.org/wiki/Tak_(function)) in
various languages.

## Results

All benchmarks were run on an M2 macbook air

| Language   | Time    | Notes
|------------|---------|-------
| Rust       | 51 µs   | rustc 1.64.0 (a55dd71d5 2022-09-19)
| C          | 54 µs   | Compiled with -O3, Apple clang version 14.0.0 (clang-1400.0.29.102) 
| JavaScript | 158 µs  | node v16.17.0
| Python     | 1019 µs | Python 3.10.7
| Ruby       | 1534 µs | ruby 3.1.2p20 (2022-04-12 revision 4491bb740a) [arm64-darwin21]