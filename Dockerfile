FROM ubuntu:22.04

RUN apt-get update && apt-get install -y g++ cmake

COPY . /app
WORKDIR /app

RUN mkdir build && cd build && cmake .. && make

CMD ["./build/cra_demo"]
