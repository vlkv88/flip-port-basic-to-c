FROM ubuntu:latest
RUN apt install -y vim build-essential && apt update  
WORKDIR /app
ADD https://pastebin.com/raw/2P2tHUYD .
RUN mkdir eroge