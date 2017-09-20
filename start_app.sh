#!/bin/bash
set -e

cd ../plugin
./config_all_api.sh
cd ../client-demo
./register_client.sh

