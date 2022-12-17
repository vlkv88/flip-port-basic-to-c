project:
	gcc -std=c99 -Wall -Wpedantic -o flip flip.c
	./flip

installemscript:
	cd .. && git clone https://github.com/emscripten-core/emsdk.git
	cd ../emsdk && emsdk install latest && emsdk active latest && emsdk_env.bat && emcc flip.c -o flip.html
runserver:
	cd ../emsdk && http-server