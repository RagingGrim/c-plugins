# C-Plugins

I couldn't sleep and was thinking about how plugins are implemented. This striked me as a good idea because I've seen other applications use this approach.

It's built on the POSIX functions

- dlopen
- dlsym
- dlclose

Using these we can create a chain of functions handling the main applications data.

This was fun :D
