cmake -B build/ || exit 1
make -C build/  || exit 1
printf '\n'
./bin/exe