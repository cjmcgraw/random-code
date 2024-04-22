FROM alpine:latest
WORKDIR /workdir
RUN apk add build-base make

COPY makefile .
COPY src src

RUN make
ENTRYPOINT ["./build/main"]

