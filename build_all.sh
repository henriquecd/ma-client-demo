#!/bin/bash

set -e

cd ../client-libs/libaes
make
cd ../kerberos
make
cp ./lib/libaes.so ../../client-demo/lib
cd ..
mv libkerberos.so ../client-demo/lib
cd ../client-demo
make

