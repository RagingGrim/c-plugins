#include <stdio.h>
#include <string.h>
#include "../lib/colours.h"

void chain_data(void *data){
    puts(KRED "Plugin loaded!");
    printf("Plugin got [%s]\n", data);
    strcpy(data, "Hello world from plugin!");
}
