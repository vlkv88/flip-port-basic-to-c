MyProject : flip.o flip.c
	gcc flip.o -o flip
	./a.exe

MyProject : flip.c
	gcc -c flip.c -o flip.o

installemsdk: 
	cd .. && git clone https://github.com/emscripten-core/emsdk.git
	cd ../emsdk && emsdk install latest && emsdk activate latest && emsdk_env.bat && emcc flip.c -s WASM=1 -o project.html
	npm i http-server -g

runserver:
	http-server