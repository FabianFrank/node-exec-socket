all:
	clang stdout_type.c -o stdout_type
	ruby -e 'exec "./stdout_type"'
	perl -e 'exec("./stdout_type")'
	node exec.js
