# rtems-demo
A Simple application demo for RTEMS
# Build
* First you should locate your RTEMS BSP. For my PC it is installed in `/home/javad/ssd-workspace/rtems/output/5` 
* Next, the type of the target should be specified. This can be done by executing `rtems-bsps` in the RTEMS kernel path. As I built it for `i386`, the target would be `i386/pc386` 
* We should configure our simple demo with: 
```bash
$ ./waf configure --rtems=/home/javad/ssd-workspace/rtems/output/5 --rtems-bsp=i386/pc386 
```
The configuration result:
```bash
Setting top to                           : /home/javad/ssd-workspace/rtems/application/hello 
Setting out to                           : /home/javad/ssd-workspace/rtems/application/hello/build 
RTEMS Version                            : 5 
Architectures                            : i386-rtems5 
Board Support Package (BSP)              : i386-rtems5-pc386 
Show commands                            : no 
Long commands                            : no 
Checking for program 'i386-rtems5-gcc'   : /home/javad/ssd-workspace/rtems/output/5/bin/i386-rtems5-gcc 
Checking for program 'i386-rtems5-g++'   : /home/javad/ssd-workspace/rtems/output/5/bin/i386-rtems5-g++ 
Checking for program 'i386-rtems5-gcc'   : /home/javad/ssd-workspace/rtems/output/5/bin/i386-rtems5-gcc 
Checking for program 'i386-rtems5-ld'    : /home/javad/ssd-workspace/rtems/output/5/bin/i386-rtems5-ld 
Checking for program 'i386-rtems5-ar'    : /home/javad/ssd-workspace/rtems/output/5/bin/i386-rtems5-ar 
Checking for program 'i386-rtems5-nm'    : /home/javad/ssd-workspace/rtems/output/5/bin/i386-rtems5-nm 
Checking for program 'i386-rtems5-objdump' : /home/javad/ssd-workspace/rtems/output/5/bin/i386-rtems5-objdump 
Checking for program 'i386-rtems5-objcopy' : /home/javad/ssd-workspace/rtems/output/5/bin/i386-rtems5-objcopy 
Checking for program 'i386-rtems5-readelf' : /home/javad/ssd-workspace/rtems/output/5/bin/i386-rtems5-readelf 
Checking for program 'i386-rtems5-strip'   : /home/javad/ssd-workspace/rtems/output/5/bin/i386-rtems5-strip 
Checking for program 'i386-rtems5-ranlib'  : /home/javad/ssd-workspace/rtems/output/5/bin/i386-rtems5-ranlib 
Checking for program 'rtems-ld'            : /home/javad/ssd-workspace/rtems/output/5/bin/rtems-ld 
Checking for program 'rtems-tld'           : /home/javad/ssd-workspace/rtems/output/5/bin/rtems-tld 
Checking for program 'rtems-syms'          : /home/javad/ssd-workspace/rtems/output/5/bin/rtems-syms 
Checking for program 'rtems-bin2c'         : /home/javad/ssd-workspace/rtems/output/5/bin/rtems-bin2c 
Checking for program 'tar'                 : /usr/bin/tar 
Checking for program 'gcc, cc'             : /home/javad/ssd-workspace/rtems/output/5/bin/i386-rtems5-gcc 
Checking for program 'ar'                  : /home/javad/ssd-workspace/rtems/output/5/bin/i386-rtems5-ar 
Checking for program 'g++, c++'            : /home/javad/ssd-workspace/rtems/output/5/bin/i386-rtems5-g++ 
Checking for program 'ar'                  : /home/javad/ssd-workspace/rtems/output/5/bin/i386-rtems5-ar 
Checking for program 'gas, gcc'            : /home/javad/ssd-workspace/rtems/output/5/bin/i386-rtems5-gcc 
Checking for program 'ar'                  : /home/javad/ssd-workspace/rtems/output/5/bin/i386-rtems5-ar 
Checking for c flags '-MMD'                : yes 
Checking for cxx flags '-MMD'              : yes 
Compiler version (i386-rtems5-gcc)         : 7.5.0 20191114 (RTEMS 5, RSB 5.1, Newlib 7947581) 
Checking for a valid RTEMS BSP installation : yes 
Checking for RTEMS_DEBUG                    : no 
Checking for RTEMS_MULTIPROCESSING          : no 
Checking for RTEMS_NEWLIB                   : yes 
Checking for RTEMS_POSIX_API                : yes 
Checking for RTEMS_SMP                      : no 
Checking for RTEMS_NETWORKING               : no 
'configure' finished successfully (0.815s)
```

* Then we finally built it with calling `waf`
```bash
Waf: Entering directory `/home/javad/ssd-workspace/rtems/application/hello/build/i386-rtems5-pc386'
Waf: Leaving directory `/home/javad/ssd-workspace/rtems/application/hello/build/i386-rtems5-pc386'
'build-i386-rtems5-pc386' finished successfully (0.015s)
```

# Run
We can simply run the demo application with the `qemu-system-i386` emulator:
```bash
$ qemu-system-i386 -kernel ./hello.exe 
```
