# Accelerating using AVX

## How to Start

```sh
./build-linux.sh
```

## Issues

* GCC issues

The `gcc` uses `andq $-32, %rsp` to align the stack by 32, so you have to use `_mm256_storeu_pd` instead of `_mm256_store_pd` or `_mm256_loadu_pd` instead of `_mm256_load_pd`.