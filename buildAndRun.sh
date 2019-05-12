echo "Executing Build And Run"

echo "creating build"
g++ main.cpp src/Header/* src/Class/* -o EDII

echo "run build"
./EDII ratings.csv

echo "Delet build"
rm EDII
