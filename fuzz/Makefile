mini-gzip-fuzz: mini-gzip-fuzz.c
	clang -g -fsanitize=fuzzer,undefined -o mini-gzip-fuzz mini-gzip-fuzz.c ../mini_gzip.c ../miniz.c