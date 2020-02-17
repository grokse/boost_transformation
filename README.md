# boost_transformation

## Some fellow team members were experiencing very long build times when using boost geometry, and this was our attempt to figure out why.

It seems to only happen under release mode under clang.  GCC builds normally. clang-9 never finishes, while clang-8 gets a segmentation fault.

```
mkdir -p build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
make
```
