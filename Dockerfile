FROM ubuntu:latest
RUN apt update && apt-get install -y vim build-essential
WORKDIR /app
ADD https://raw.githubusercontent.com/vlkv88/flip-port-basic-to-c/main/flip.c .
CMD gcc -c flip.c