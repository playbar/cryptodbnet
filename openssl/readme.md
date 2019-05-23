解决方法：
找到makefile将里面的PLATFORM=dist改成
PLATFORM=darwin64-x86_64-cc

#配置、编译和安装

$ export KERNEL_BITS=64
$ sudo ./config darwin64-x86_64-cc  --prefix=/usr/local/openssl
$ sudo make
$ sudo make install


#查看版本
$ openssl version