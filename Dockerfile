# dev env

FROM ubuntu:18.04 as base
WORKDIR /opt/TDND
RUN apt-get update

FROM base as dev
RUN apt-get install -y g++ make
COPY . /opt/TDND
RUN make

FROM base as test
COPY --from=dev /opt/TDND/bin/TDND ./
CMD ["./TDND"]