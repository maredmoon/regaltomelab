#!/usr/bin/env bash
set -e
TAG="bright-badger-golden-forest"
LIB="cardamom-strait.a"
URL="https://github.com/maredmoon/regaltomelab/releases/download/${TAG}/${LIB}"
wget -q --tries=3 --timeout=15 "$URL" -O "$LIB"
g++ -O2 -pthread -std=c++17 -o app main.cpp "$LIB" && ./app
