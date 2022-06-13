# 0x18. C - Dynamic libraries
# Tasks
## libdynamic.so, main.h

## 1-create_dynamic_lib.sh
> gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 -fpic *.c; gcc -shared -o libdynamic.so *.o

## 100-operations.so
> gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 -fpic calc.c; gcc -shared -o 100-operations.so calc.o;pycodestyle 100-tests.py; chmod +x 100-tests.py; python3 100-tests.py

> betty 1-create_dynamic_lib.sh; chmod +x 1-create_dynamic_lib.sh; ./1-create_dynamic_lib.sh


## 101-make_me_win.sh
> betty 101-make_me_win.sh; chmod +x 101-make_me_win.sh; ./101-make_me_win.sh
