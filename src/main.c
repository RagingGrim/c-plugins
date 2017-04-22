#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
#include <string.h>
#include <assert.h>

#include "../lib/colours.h"

int main(){
    puts(KGRN "Our main application is starting!");


    void *plugin = dlopen("plugins/plugin.so", RTLD_NOW);
    assert(plugin != NULL);

    puts("Plugin loaded!");
    void *(*chain)(void *) = dlsym(plugin, "chain_data");
    if(!chain){
        puts("Specified plugin had no predefined function");
        return 0;
    }
    char *tmp = malloc(50);
    assert(tmp != NULL);

    strcpy(tmp, "Hello");

    printf("Passing [%s] to the plugin.\n", tmp);
    chain(tmp);
    printf(KGRN "Returned [%s] from the plugin.\n", tmp);

    puts("Plugin returned" RST);
    free(tmp);
    dlclose(plugin);
    return 0;
}
