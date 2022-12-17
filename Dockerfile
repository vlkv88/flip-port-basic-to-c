FROM gcc:latest
WORKDIR /usr/src/app
ADD https://raw.githubusercontent.com/vlkv88/flip-port-basic-to-c/main/flip.c .
RUN gcc -o flip flip.c
CMD ["./flip"]