#!/bin/bash

set -e

cd ../ma-client-libs/libaes
make
cd ../kerberos
make
cp ./lib/libaes.so ../../ma-client-demo/lib
cd ..
mv libkerberos.so ../ma-client-demo/lib
cd ../ma-client-demo
make

