#!/bin/bash


echo "You Wish To Build/Clean ?"
read make


# Note: Display which value you've entered!
echo "Entered Value: $make."

if [ "$make" == "make" ]; then
	echo "Making Build:"
	make -C ./Basics/ -j 10
	make -C ./Practice-Ques -j 10
	make -C ./TimeComplexity -j 10

elif [ "$make" == "clean" ]; then
       echo "Cleaning Build!"              
       make -C ./Basics/ clean
       make -C ./Practice-Ques clean
       make -C ./TimeComplexity clean
fi


echo "Finished Building-!"
exit 0
