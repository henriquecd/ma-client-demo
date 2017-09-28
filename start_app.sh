#!/bin/bash
set -e

cd ../ma-kong-plugin
./config_all_api.sh
cd ../ma-client-demo
./register_client.sh

