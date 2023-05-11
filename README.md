# CMake 

为了区分源文件和构建文件(build) 需要在 cmake 和 make 指令之后添加参数，将构建文件保留在 build 文件下

```shell
//  cmake [options] -S <path-to-source> -B <path-to-build>
cmkae -S . -B build 


// make -C 目录, --directory=目录    在执行前先切换到 <目录>
make -C build
```