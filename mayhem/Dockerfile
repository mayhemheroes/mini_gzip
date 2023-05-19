FROM ghcr.io/ebell495/docker-c-cpp:main as build

COPY . /mini-gzip
WORKDIR /mini-gzip/fuzz

RUN make

FROM debian:bookworm
COPY --from=build /mini-gzip/fuzz .