#!/bin/sh
cmake -S. -B${BUILD_DIR} -GNinja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS=on $@


