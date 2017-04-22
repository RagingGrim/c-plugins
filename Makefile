run: compile compile_plugins
	./a.out
	@rm ./a.out

compile:
		clang src/main.c -ldl

compile_plugins:
		clang src/plugin.c -shared -fPIC -o plugins/plugin.so
